# Add a domain manually to the _Firefox Multi-Account Containers_ addon configuration

Using the Mozilla Firefox web browser:

1. Open the URL [`about:devtools-toolbox?id=%40testpilot-containers&type=extension`](about:devtools-toolbox?id=%40testpilot-containers&type=extension)
1. In the Console tab run:

    ```js
    async function addUrl(container, url) {
        const identities = await browser.contextualIdentities.query({ name: container });
        if (identities.length > 1) throw new Error("too many container with the same name");
        if (identities.length == 0) throw new Error("container not found");

        const cookieStoreId = identities[0].cookieStoreId;
        const userContextId = backgroundLogic.getUserContextIdFromCookieStoreId(cookieStoreId);
        console.log("user context: ", userContextId);

        const assignManager = window.assignManager;

        await assignManager._setOrRemoveAssignment(false, url, userContextId, false);
    }

    addUrl("Facebook", "https://facebook.com");
    ```

## Resources

-   [Discussion on GitHub](https://github.com/mozilla/multi-account-containers/pull/2114#issuecomment-1004056712)
-   [phy1729/container-config](https://github.com/phy1729/container-config)
