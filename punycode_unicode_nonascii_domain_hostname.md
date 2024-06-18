# Representing non-ASCII domain names in ASCII using the Punycode format

[From the Punycode article on Wikipedia](https://en.wikipedia.org/wiki/Punycode) ([archived](https://archive.is/20240516063144/https://en.wikipedia.org/wiki/Punycode)):

> Punycode is a representation of Unicode with the limited ASCII character subset used for Internet hostnames.

> Using Punycode, host names containing Unicode characters are transcoded to a subset of ASCII consisting of letters, digits, and hyphens, which is called the letter–digit–hyphen (LDH) subset.

> For example, München (German name for Munich) is encoded as Mnchen-3ya.

> The Punycode syntax is a method of encoding strings containing Unicode characters, such as internationalized domain names (IDNA), into the LDH subset of ASCII favored by DNS.

> To prevent hyphens in non-international domain names from triggering a Punycode decoding, the string xn-- is prepended to Punycode sequences in internationalized domain names. This is called ACE (ASCII Compatible Encoding).

> Thus the domain name "bücher.tld" would be represented in a URL as "xn--bcher-kva.tld".

## Format conversion using the GNU `idn` utility

Converting to ACE according to IDNA:

```sh
idn "kalendārs.lv"
# or
idn -a "kalendārs.lv"
```

```
xn--kalendrs-m7a.lv
```

Converting from ACE according to IDNA:

```sh
idn -u "xn--kalendrs-m7a.lv"
```

```
kalendārs.lv
```

## Use

-   The Userstyles CSS `domain()` function requires use of Punycode for specifying the non-ASCII character domains.

## Resources

-   [_Punycode converter (IDN converter), Punycode to Unicode 🔧🛠🧰_](https://www.punycoder.com/)
-   [_mathiasbynens/punycode.js: A robust Punycode converter that fully complies to RFC 3492 and RFC 5891._](https://github.com/mathiasbynens/punycode.js/)
