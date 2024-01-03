# Netscape bookmark export and import file format

`bookmarks.html`:

```html
<!DOCTYPE NETSCAPE-Bookmark-file-1>
<!-- This is an automatically generated file.
     It will be read and overwritten.
     DO NOT EDIT! -->
<META HTTP-EQUIV="Content-Type" CONTENT="text/html; charset=UTF-8">
<meta http-equiv="Content-Security-Policy"
      content="default-src 'self'; script-src 'none'; img-src data: *; object-src 'none'"></meta>
<TITLE>Bookmarks</TITLE>
<H1>Bookmarks Menu</H1>

<DL><p>
    <DT><H3>Directory</H3>
    <DL><p>
        <DT><H3>Nested directory</H3>
        <DL><p>
            <DT><A HREF="https://example.com/">Example Domain</A>
        </DL><p>
        <DT><A HREF="https://example.com/">Example Domain</A>
    </DL><p>
    <DT><H3>Another directory</H3>
    <DL><p>
        <DT><A HREF="https://example.com/">Example Domain</A>
        <DT><A HREF="https://example.com/">Example Domain</A>
    </DL><p>
    <DT><A HREF="https://example.com/">Example Domain</A>
</DL>
```

The `A` elements also support `ADD_DATE` and `LAST_MODIFIED` attributes, that are Unix timestamps.

## Resources

-   [Netscape Bookmark File Format (Internet Explorer) | Microsoft Learn](<https://learn.microsoft.com/en-us/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753582(v=vs.85)>)
