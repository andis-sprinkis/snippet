# RSS (Really Simple Syndication) format

## RSS (Really Simple Syndication) 0.91, 0.92, 2.0

[RSS 2.0 Specification (Current)](https://www.rssboard.org/rss-specification)

## RSS (RDF Site Summary) 1.0

[RDF Site Summary (RSS) 1.0](https://validator.w3.org/feed/docs/rss1.html)

## Examples

Registering feed `http://example.org/feed/rss.xml` in the HTML `<head>`:

```html
<link href="http://example.org/feed/rss.xml" type="application/rss+xml" rel="alternate" title="Sitewide RSS feed" />
```

File `http://example.org/feed/rss.xml`:

```xml
<?xml version="1.0" encoding="utf-8" ?>

<rss version="2.0">
    <channel>
        <title>RSS Title</title>
        <description>This is an example of an RSS feed</description>
        <link>http://www.example.com/main.html</link>
        <copyright>2020 Example.com All rights reserved</copyright>
        <lastBuildDate>Mon, 6 Sep 2010 00:01:00 +0000</lastBuildDate>
        <pubDate>Sun, 6 Sep 2009 16:20:00 +0000</pubDate>
        <ttl>1800</ttl>

        <item>
            <title>Example entry</title>
            <description>Here is some text containing an interesting description.</description>
            <link>http://www.example.com/blog/post/1</link>
            <guid isPermaLink="false">7bd204c6-1655-4c27-aeee-53f933c5395f</guid>
            <pubDate>Sun, 6 Sep 2009 16:20:00 +0000</pubDate>
        </item>
    </channel>
</rss>
```
