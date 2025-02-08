# OPML (Outline Processor Markup Language) format

From [OPML 2.0 spec](https://opml.org/spec2.opml):

> The purpose of this format is to provide a way to exchange information between outliners and Internet services that can be browsed or controlled through an outliner.

> An outline is a tree, where each node contains a set of named attributes with string values.

## Specifications

- [OPML 1.0 Specification](https://2005.opml.org/spec1.html)
- [OPML 2.0 spec](https://opml.org/spec2.opml)

## Examples

### RSS 2.0 feed list

```xml
<?xml version="1.0" encoding="utf-8"?>
<!-- <?xml version="1.0" encoding="ISO-8859-1"?> -->

<opml version="2.0">
    <head>
        <title>mySubscriptions.opml</title>
        <dateCreated>Sat, 18 Jun 2005 12:11:52 GMT</dateCreated>
        <dateModified>Tue, 02 Aug 2005 21:42:48 GMT</dateModified>
        <ownerName>Dave Winer</ownerName>
        <ownerEmail>dave@scripting.com</ownerEmail>
        <expansionState></expansionState>
        <vertScrollState>1</vertScrollState>
        <windowTop>61</windowTop>
        <windowLeft>304</windowLeft>
        <windowBottom>562</windowBottom>
        <windowRight>842</windowRight>
    </head>
    <body>
        <outline text="CNET News.com" description="Tech news and business reports by CNET News.com. Focused on information technology, core topics include computers, hardware, software, networking, and Internet media." htmlUrl="http://news.com.com/" language="unknown" title="CNET News.com" type="rss" version="RSS2" xmlUrl="http://news.com.com/2547-1_3-0-5.xml"/>
        <outline text="washingtonpost.com - Politics" description="Politics" htmlUrl="http://www.washingtonpost.com/wp-dyn/politics?nav=rss_politics" language="unknown" title="washingtonpost.com - Politics" type="rss" version="RSS2" xmlUrl="http://www.washingtonpost.com/wp-srv/politics/rssheadlines.xml"/>
        <outline text="Scobleizer: Microsoft Geek Blogger" description="Robert Scoble's look at geek and Microsoft life." htmlUrl="http://radio.weblogs.com/0001011/" language="unknown" title="Scobleizer: Microsoft Geek Blogger" type="rss" version="RSS2" xmlUrl="http://radio.weblogs.com/0001011/rss.xml"/>
        <!-- ... -->
    </body>
</opml>
```

### Outline of places

```xml
<?xml version="1.0" encoding="utf-8"?>
<!-- <?xml version="1.0" encoding="ISO-8859-1"?> -->

<opml version="2.0">
    <head>
        <title>placesLived.opml</title>
        <dateCreated>Mon, 27 Feb 2006 12:09:48 GMT</dateCreated>
        <dateModified>Mon, 27 Feb 2006 12:11:44 GMT</dateModified>
        <ownerName>Dave Winer</ownerName>
        <ownerId>http://www.opml.org/profiles/sendMail?usernum=1</ownerId>
        <expansionState>1, 2, 5, 10, 13, 15</expansionState>
        <vertScrollState>1</vertScrollState>
        <windowTop>242</windowTop>
        <windowLeft>329</windowLeft>
        <windowBottom>665</windowBottom>
        <windowRight>547</windowRight>
    </head>
    <body>
        <outline text="Places I've lived">
            <outline text="Boston">
                <outline text="Cambridge"/>
                <outline text="West Newton"/>
            </outline>
            <outline text="Bay Area">
                <outline text="Mountain View"/>
                <outline text="Los Gatos"/>
                <outline text="Palo Alto"/>
                <outline text="Woodside"/>
            </outline>
            <outline text="Florida" type="include" url="http://hosting.opml.org/dave/florida.opml"/>
            <!-- ... -->
        </outline>
    </body>
</opml>
```

### Outline of source code with comments

```xml
<?xml version="1.0" encoding="utf-8"?>
<!-- <?xml version="1.0" encoding="ISO-8859-1"?> -->

<opml version="2.0">
    <head>
        <title>workspace.userlandsamples.doSomeUpstreaming</title>
        <dateCreated>Mon, 11 Feb 2002 22:48:02 GMT</dateCreated>
        <dateModified>Sun, 30 Oct 2005 03:30:17 GMT</dateModified>
        <ownerName>Dave Winer</ownerName>
        <ownerEmail>dwiner@yahoo.com</ownerEmail>
        <expansionState>1, 2, 4</expansionState>
        <vertScrollState>1</vertScrollState>
        <windowTop>74</windowTop>
        <windowLeft>41</windowLeft>
        <windowBottom>314</windowBottom>
        <windowRight>475</windowRight>
    </head>
    <body>
        <outline text="Changes" isComment="true">
            <outline text="1/3/02; 4:54:25 PM by DW">
                <outline text="Change &quot;playlist&quot; to &quot;radio&quot;."/>
            </outline>
            <outline text="2/12/01; 1:49:33 PM by DW" isComment="true">
                <outline text="Test upstreaming by sprinkling a few files in a nice new test folder."/>
            </outline>
        </outline>
        <outline text="on writetestfile (f, size)">
            <outline text="file.surefilepath (f)" isBreakpoint="true"/>
            <outline text="file.writewholefile (f, string.filledstring (&quot;x&quot;, size))"/>
        </outline>
        <outline text="local (folder = user.radio.prefs.wwwfolder + &quot;test\\largefiles\\&quot;)"/>
        <outline text="for ch = 'a' to 'z'">
            <outline text="writetestfile (folder + ch + &quot;.html&quot;, random (1000, 16000))"/>
        </outline>
    </body>
</opml>
```

## Uses

From [_Outline Processor Markup Language (OPML) 2.0_ on the loc.gov](https://www.loc.gov/preservation/digital/formats/fdd/fdd000554.shtml):

> According to the [specification](http://opml.org/spec2.opml), the goals of OPML are "to provide a way to exchange information between outliners and Internet services that can be browsed or controlled through an outliner"; serve as a "file format for an outliner application, which is why OPML files may contain information about the size, position and expansion state of the window the outline is displayed in"; and, as a "format for exchanging subscription lists between feed readers and aggregators" especially RSS feeds. [opml.org](http://opml.org/spec2.opml) includes sample files for various uses.

> Subscription lists, especially RSS or Really Simple Syndication feeds, are identified as sub-element of the body element with a node of type rss or an outline element that contains nodes of type rss.

## Versions

From [_Outline Processor Markup Language (OPML) 2.0_ on the loc.gov](https://www.loc.gov/preservation/digital/formats/fdd/fdd000554.shtml):

> The [difference](https://github.com/VIPnytt/OPMLParser) between version 2.0 and 1.0 is the "text" attribute, which is optional in version 1.0.

> The difference between version 1.0 and version 1.1 is less clear and in fact, in a post on opml.gov from January 24, 2005 titled [About OPML 1.1](http://opml.org/history/aboutOpml11.opml), specification author Dave Winer explains that the addition of an optional cloud element to the OPML head element was under consideration because cloud was added to RSS in [version 0.92](http://backend.userland.com/rss092#ltcloudgtSubelementOfLtchannelgt). He explains that "this allows a server to implement update-notification, a lightweight publish-subscribe mechanism that works over various Internet protocols." However, due to changes in priorities and personal reasons, the _cloud_ element was never actually added to OPML. He states "if you see an OPML 1.1 file, you should treat it like an OPML 1.0 file. That's it. Enjoy!"

## Issues

From [_Outline Processor Markup Language (OPML) 2.0_ on the loc.gov](https://www.loc.gov/preservation/digital/formats/fdd/fdd000554.shtml):

> [Wikidata](https://en.wikipedia.org/wiki/OPML#Criticism) lists some criticisms of OPML including issues with the requirement that syntax in date-time elements must conform to the outdated [RFC 822](https://datatracker.ietf.org/doc/html/rfc822) specification which has been long superseded by [RFC 5322](https://datatracker.ietf.org/doc/html/rfc5322), issues with the "expansionState" attribute, and general potential interoperability issues because "OPML documents relies almost entirely on the undocumented conventions of content producers." Issues with the OPML specification are included on the [opml.org GitHub repo](https://github.com/scripting/opml.org/issues).

## Resources

- [opml.org home](https://opml.org/)
- [OPML - Wikipedia](https://en.wikipedia.org/wiki/OPML)
- [scripting/opml.org: A repository to back up the opml.org website.](https://github.com/scripting/opml.org)
