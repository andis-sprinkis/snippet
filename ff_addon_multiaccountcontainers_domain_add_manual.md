# Add a domain manually to the _Firefox Multi-Account Containers_ addon configuration

Using the Mozilla Firefox web browser:

1. Open the URL [`about:devtools-toolbox?id=%40testpilot-containers&type=extension`](about:devtools-toolbox?id=%40testpilot-containers&type=extension)
1. In the Console tab run:

    ```js
    async function main() {
        // Map<string, {
        //   color: browser.contextualIdentities.IdentityColor,
        //   icon: browser.contextualIdentities.IdentityIcon,
        //   isolate: boolean,
        //   URLs: Map<string, boolean>
        // }>
        const containers = new Map([
            [
                "Facebook",
                {
                    color: "blue",
                    icon: "circle",
                    isolate: true,
                    URLs: new Map([
                        ["https://facebook.com", true],
                        // ...
                    ]),
                },
            ],
        ]);

        const assignManager = window.assignManager;

        for (const [name, spec] of containers) {
            const context_identities = await browser.contextualIdentities.query(
                { name: name },
            );
            let container;
            if (context_identities.length === 0) {
                container = await browser.contextualIdentities.create({
                    name: name,
                    color: spec.color,
                    icon: spec.icon,
                });
            } else if (context_identities.length == 1) {
                container = await browser.contextualIdentities.update(
                    context_identities[0].cookieStoreId,
                    {
                        name: name,
                        color: spec.color,
                        icon: spec.icon,
                    },
                );
            } else {
                throw new Error(`More than one container with name ${name}.`);
            }

            const cookieStoreId = container.cookieStoreId;
            const userContextId =
                backgroundLogic.getUserContextIdFromCookieStoreId(
                    cookieStoreId,
                );
            for (const [url, neverAsk] of spec.URLs) {
                await assignManager._setOrRemoveAssignment(
                    false,
                    url,
                    userContextId,
                    false,
                );
                if (neverAsk) {
                    await assignManager._neverAsk({
                        neverAsk: true,
                        pageUrl: url,
                    });
                }
            }

            const state = await identityState.storageArea.get(cookieStoreId);
            if (spec.isolate != !!state.isIsolated) {
                await backgroundLogic.addRemoveSiteIsolation(cookieStoreId);
            }
        }
    }

    (async function () {
        await main();
    })();
    ```

    Above code is an adaptation of [phy1729/container-config](https://github.com/phy1729/container-config) by Matthew Martin.

    The original license:

    ```
    Copyright (c) 2021 Matthew Martin <phy1729@gmail.com>

    Permission to use, copy, modify, and distribute this software for any
    purpose with or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
    ```

## Resources

- [Discussion on GitHub](https://github.com/mozilla/multi-account-containers/pull/2114#issuecomment-1004056712)
- [phy1729/container-config](https://github.com/phy1729/container-config)
- [Fix #1670 - Add option to manually assign an URL to a container by dannycolin · Pull Request #2710 · mozilla/multi-account-containers](https://github.com/mozilla/multi-account-containers/pull/2710)
