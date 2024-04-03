# vCard file format example

```vcard
BEGIN:VCARD
VERSION:3.0
N:Flindstone;Fred;;;
FN:Freddie Flindstone
NICKNAME:Freddie Flindstone
UID:urn:uuid:e8c1ca7af7123b6d2c8ff624e7671650
URL:http://dynodiggers.com
item1.URL:http://twitter.com/freedie
item1.X-ABLabel:twitter
item2.URL:http://facebook.com/3464246
item2.X-ABLabel:facebook
item3.URL:skype://fredf234
item3.X-ABLabel:skype
EMAIL;type=INTERNET;type=WORK;type=pref:fred@dynodiggers.com
ADR;type=WORK;type=pref:;;55 Rock Ave;Bedrock 43246
PHOTO;JPEG;ENCODING=BASE64:
TITLE:Dinosaur Operator
ORG:Rubble inc
TEL;type=CELL;type=pref:0408123456
TEL;type=WORK;type=pref:555321112
SORT-STRING:Flindstone
NOTE:Wife is Wilma
END:VCARD
```

The example above is from a comment by *Gary* on article [The sad story of the vCard format and its lack of interoperability – Alessandro Rossini](https://alessandrorossini.org/the-sad-story-of-the-vcard-format-and-its-lack-of-interoperability/) ([archived](https://archive.is/20161209103053/https://alessandrorossini.org/the-sad-story-of-the-vcard-format-and-its-lack-of-interoperability/)):

> Here is the format that was settled on. It seems deceptively simple looking back at it, but it’s the result of a lot of trial and error, exporting and importing to get the information across multiple devices (Tested between Google Contacts, iPhone, Android, Outlook and Apple Contacts). Treat any social media as URIs. Annotate them with itemX. Avoid any vendor X- extensions, eg X-SOCIALPROFILE, X-SKYPE, etc.

## Resources

-   [RFC 6350 - vCard Format Specification](https://datatracker.ietf.org/doc/html/rfc6350)
-   [RFC 6352 - CardDAV: vCard Extensions to Web Distributed Authoring and Versioning (WebDAV)](https://datatracker.ietf.org/doc/html/rfc6352)
