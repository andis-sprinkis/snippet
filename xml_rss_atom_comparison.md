# RSS compared with Atom

From [RSS - Wikipedia](https://en.wikipedia.org/wiki/RSS):

> Both RSS and Atom are widely supported and are compatible with all major consumer feed readers. RSS gained wider use because of early feed reader support.

> Technically, **Atom has several advantages**: less restrictive licensing, [IANA](https://en.wikipedia.org/wiki/IANA "IANA")\-registered [MIME type](https://en.wikipedia.org/wiki/MIME_type "MIME type"), XML namespace, [URI](https://en.wikipedia.org/wiki/URI "URI") support, [RELAX NG](https://en.wikipedia.org/wiki/RELAX_NG "RELAX NG") support.

> The following table shows RSS elements alongside Atom elements where they are equivalent.
>
> Note: the asterisk character (\*) indicates that an element must be provided (Atom elements "author" and "link" are only required under certain conditions).
>
> | RSS 2.0                        | Atom 1.0                            |
> | ------------------------------ | ----------------------------------- |
> | `author`                       | `author`\*                          |
> | `category`                     | `category`                          |
> | `channel`                      | `feed`                              |
> | `copyright`                    | `rights`                            |
> | —                              | `subtitle`                          |
> | `description`\*                | `summary` or `content`              |
> | `generator`                    | `generator`                         |
> | `guid`                         | `id`\*                              |
> | `image`                        | `logo`                              |
> | `item`                         | `entry`                             |
> | `lastBuildDate` (in `channel`) | `updated`\*                         |
> | `link`\*                       | `link`\*                            |
> | `managingEditor`               | `author` or `contributor`           |
> | `pubDate`                      | `published` (subelement of `entry`) |
> | `title`\*                      | `title`\*                           |
> | `ttl`                          | —                                   |

## Resources

- [Rss20AndAtom10Compared - Atom Wiki](https://www.intertwingly.net/wiki/pie/Rss20AndAtom10Compared) ([achived](https://archive.is/20240808192514/http://www.intertwingly.net/wiki/pie/Rss20AndAtom10Compared))
