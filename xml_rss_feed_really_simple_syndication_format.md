# RSS (_Really Simple Syndication_ and _RDF Site Summary_) formats

From [RSS - Wikipedia](https://en.wikipedia.org/wiki/RSS):

> As of January 2007, tracking data from www.syndic8.com indicates that the three main versions of RSS in current use are 0.91, 1.0, and 2.0, constituting 13%, 17%, and 67% of worldwide RSS usage, respectively.

## RSS (Really Simple Syndication) 2.0 (2.0.1\*), 0.92, 0.91

[RSS 2.0 Specification (Current)](https://www.rssboard.org/rss-specification)

### Example

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

### Versions

From [RSS - Wikipedia](https://en.wikipedia.org/wiki/RSS):

> The RSS 2.\* branch (initially UserLand, now Harvard) includes the following versions:
>
> - RSS 0.91 is the simplified RSS version released by Netscape, and also the version number of the simplified version originally championed by Dave Winer from Userland Software. The Netscape version was now called _Rich Site Summary_; this was no longer an RDF format, but was relatively easy to use.
> - RSS 0.92 through 0.94 are expansions of the RSS 0.91 format, which are mostly compatible with each other and with Winer's version of RSS 0.91, but are not compatible with RSS 0.90.
> - RSS 2.0.1 has the internal version number 2.0. RSS 2.0.1 was proclaimed to be "frozen", but still updated shortly after release without changing the version number. RSS now stood for _Really Simple Syndication_. The major change in this version is an explicit extension mechanism using XML namespaces.

## RSS (RDF Site Summary) 1.0

[RDF Site Summary (RSS) 1.0](https://validator.w3.org/feed/docs/rss1.html)

### Example

```xml
<?xml version="1.0"?>

<rdf:RDF xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#" xmlns="http://purl.org/rss/1.0/">
    <channel rdf:about="http://www.xml.com/xml/news.rss">
        <title>XML.com</title>
        <link>http://xml.com/pub</link>
        <description>XML.com features a rich mix of information and services for the XML community.</description>
        <image rdf:resource="http://xml.com/universal/images/xml_tiny.gif" />

        <items>
            <rdf:Seq>
                <rdf:li resource="http://xml.com/pub/2000/08/09/xslt/xslt.html" />
                <rdf:li resource="http://xml.com/pub/2000/08/09/rdfdb/index.html" />
            </rdf:Seq>
        </items>
    </channel>

    <image rdf:about="http://xml.com/universal/images/xml_tiny.gif">
        <title>XML.com</title>
        <link>http://www.xml.com</link>
        <url>http://xml.com/universal/images/xml_tiny.gif</url>
    </image>

    <item rdf:about="http://xml.com/pub/2000/08/09/xslt/xslt.html">
        <title>Processing Inclusions with XSLT</title>
        <link>http://xml.com/pub/2000/08/09/xslt/xslt.html</link>
        <description>Processing document inclusions with general XML tools can be problematic. This article proposes a way of preserving inclusion information through SAX-based processing.</description>
    </item>

    <item rdf:about="http://xml.com/pub/2000/08/09/rdfdb/index.html">
        <title>Putting RDF to Work</title>
        <link>http://xml.com/pub/2000/08/09/rdfdb/index.html</link>
        <description>Tool and API support for the Resource Description Framework is slowly coming of age. Edd Dumbill takes a look at RDFDB, one of the most exciting new RDF toolkits.</description>
    </item>
</rdf:RDF>
```

### Versions

From [RSS - Wikipedia](https://en.wikipedia.org/wiki/RSS):

> The RDF (or RSS 1.\*) branch includes the following versions:
>
> - RSS 0.90 was the original Netscape RSS version. This RSS was called _RDF Site Summary_, but was based on an early working draft of the RDF standard, and was not compatible with the final RDF Recommendation.
> - RSS 1.0 is an open format by the RSS-DEV Working Group, again standing for _RDF Site Summary_. RSS 1.0 is an RDF format like RSS 0.90, but not fully compatible with it, since 1.0 is based on the final RDF 1.0 Recommendation.
> - RSS 1.1 is also an open format and is intended to update and replace RSS 1.0. The specification is an independent draft not supported or endorsed in any way by the RSS-Dev Working Group or any other organization.
