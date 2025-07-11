# Regular expressions

- Simple Regular Expressions (SRE)
    - Used on Unix based systems for backwards compatibility
    - Most regular-expression-aware Unix utilities, use it by default while providing support for extended regular expressions with command line arguments
    - Deprecated on POSIX compliant systems and should not be used by new utilities
    - POSIX
        - [Regular Expressions (The Single UNIX ® Specification, Version 2, Copyright © 1997 The Open Group)](https://pubs.opengroup.org/onlinepubs/7908799/xbd/re.html)
            - > The first (historical) version is described as part of the _[regexp()](https://pubs.opengroup.org/onlinepubs/7908799/xsh/regexp.html)_ function in the **XSH** specification.
        - [Regular Expressions/Simple Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Simple_Regular_Expressions) ([Archived](https://archive.is/20241012203436/https://en.wikibooks.org/wiki/Regular_Expressions/Simple_Regular_Expressions))
- Basic Regular Expressions (BRE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.3 Basic Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX Basic Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions) [Archived](https://archive.is/20241012215959/https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions)
    - GNU
        - POSIX BRE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
- Extended Regular Expressions (ERE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.4 Extended Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX-Extended Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions) [Archived](https://archive.is/20241012220242/https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions)
    - GNU
        - POSIX ERE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
- Perl Compatible Regular Expressions (PCRE)
    - [Regular Expressions/Perl-Compatible Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions) [Archived](https://archive.is/20241012203540/https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions)
    - [Perl Compatible Regular Expressions - Wikipedia](https://en.wikipedia.org/wiki/Perl_Compatible_Regular_Expressions)
        - > While PCRE originally aimed at feature-equivalence with Perl, the two implementations are not fully equivalent. During the PCRE 7.x and Perl 5.9.x phase, the two projects coordinated development, with features being ported between them in both directions. As of Perl 5.10, PCRE is also available as a replacement for Perl's default regular-expression engine through the `re::engine::PCRE` module.
- Shell regular expressions
    - [Regular Expressions/Shell Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions) ([Archived](https://archive.is/20241012203753/https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions))

## Per application

- `awk`
    - POSIX
    - GNU
- `sed`

    - POSIX

        - [sed (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/sed.html)

            > The _sed_ utility shall support the REs described in XBD [_9\. Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09); by default it shall use BREs as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03), but if the **\-E** option is used, it shall use EREs as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04).

            Options:

            - > **\-E**
              >
              > Match using extended regular expressions. Treat each pattern specified as an ERE, as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04).

    - GNU

- `grep`

    - POSIX

        - [grep (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/grep.html)

            > By default, an input line shall be selected if any pattern, treated as an entire basic regular expression (BRE) as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03), matches any part of the line excluding the terminating \<newline\>; a null BRE shall match every line.

            Options:

            - > **\-E**
              >
              > Match using extended regular expressions. Treat each pattern specified as an ERE, as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04). If any entire ERE pattern matches some part of an input line excluding the terminating \<newline\>, the line shall be matched. A null ERE shall match every line.

    - GNU

- `egrep`
    - POSIX
- `tr`

    - POSIX

        - [tr (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/tr.html#tag_20_126)

            > It should be noted that, despite similarities in appearance, the string operands used by _tr_ are not regular expressions.

    - GNU

- Shell

    - POSIX

        [Shell Command Language (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html)

        - [**2.14 Pattern Matching Notation**](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14)

            > Historically, pattern matching notation is related to, but slightly different from, the regular expression notation described in XBD [_9\. Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09). For this reason, the description of the rules for this pattern matching notation are based on the description of regular expression notation, modified to account for the differences.

        - [**2.9.4.3 Case Conditional Construct**](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_09_04_05)

            > The conditional construct **case** shall execute the _compound-list_ corresponding to the first _pattern_ (see [2.14 Pattern Matching Notation](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14)), if any are present, that is matched by the string resulting from the tilde expansion, parameter expansion, command substitution, arithmetic expansion, and quote removal of the given word.

            ```
            case word in
              [[(] pattern[ | pattern] ... ) compound-list terminator] ...
              [[(] pattern[ | pattern] ... ) compound-list]
            esac
            ```


    - GNU `bash`

## Resources

- [Regular Expressions/Print version - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Print_version) ([Archived](https://archive.is/20241012203010/https://en.wikibooks.org/wiki/Regular_Expressions/Print_version))
- [Regular Expression Engine Comparison Chart](https://gist.github.com/CMCDragonkai/6c933f4a7d713ef712145c5eb94a1816)
