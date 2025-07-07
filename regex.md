# Regular expressions

- Simple Regular Expressions (SRE)
    - Used on Unix based systems for backwards compatibility
    - Most regular-expression-aware Unix utilities, use it by default while providing support for extended regular expressions with command line arguments
    - Deprecated on POSIX compliant systems and should not be used by new utilities
    - [Regular Expressions/Simple Regular Expressions - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/Regular_Expressions/Simple_Regular_Expressions)
    - [Regular Expressions (The Single UNIX ® Specification, Version 2, Copyright © 1997 The Open Group)](https://pubs.opengroup.org/onlinepubs/7908799/xbd/re.html)
        - > The first (historical) version is described as part of the _[regexp()](https://pubs.opengroup.org/onlinepubs/7908799/xsh/regexp.html)_ function in the **XSH** specification.
- Basic Regular Expressions (BRE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.3 Basic Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX Basic Regular Expressions - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions)
    - GNU
        - POSIX BRE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
- Extended Regular Expressions (ERE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.4 Extended Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX-Extended Regular Expressions - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions)
    - GNU
        - POSIX ERE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
- Perl Compatible Regular Expressions (PCRE)
    - [Regular Expressions/Perl-Compatible Regular Expressions - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions)
    - [Perl Compatible Regular Expressions - Wikipedia](https://en.wikipedia.org/wiki/Perl_Compatible_Regular_Expressions)
        - > While PCRE originally aimed at feature-equivalence with Perl, the two implementations are not fully equivalent. During the PCRE 7.x and Perl 5.9.x phase, the two projects coordinated development, with features being ported between them in both directions. As of Perl 5.10, PCRE is also available as a replacement for Perl's default regular-expression engine through the `re::engine::PCRE` module.
- Shell regular expressions
    - [Regular Expressions/Shell Regular Expressions - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions)

## Per application

- `awk`
    - POSIX
    - GNU
- `sed`

    - POSIX

        - [sed (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/sed.html)

            - > The _sed_ utility shall support the REs described in XBD [_9\. Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09); by default it shall use BREs as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03), but if the **\-E** option is used, it shall use EREs as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04).
            - ```
              -E
                  Match using extended regular expressions. Treat each pattern specified as an ERE, as described in XBD 9.4 Extended Regular Expressions.
              ```

    - GNU

- `grep`
    - POSIX
    - GNU
- `egrep`
    - POSIX
- `tr`
    - POSIX
    - GNU
- Shell
    - POSIX
    - GNU `bash`

## Resources

- [Regular Expressions/Print version - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/Regular_Expressions/Print_version) ([Archived](https://archive.is/20241012203010/https://en.wikibooks.org/wiki/Regular_Expressions/Print_version))
- [Regular Expression Engine Comparison Chart](https://gist.github.com/CMCDragonkai/6c933f4a7d713ef712145c5eb94a1816)
