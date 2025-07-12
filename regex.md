# Regular expressions

- Simple Regular Expressions (SRE)
    - Used on Unix based systems for backwards compatibility
    - (❓) Most regular-expression-aware Unix utilities, use it by default while providing support for extended regular expressions with command line arguments
    - Deprecated on POSIX compliant systems and should not be used by new utilities
    - POSIX
        - [Regular Expressions (The Single UNIX ® Specification, Version 2, Copyright © 1997 The Open Group)](https://pubs.opengroup.org/onlinepubs/7908799/xbd/re.html) ([Archived](https://archive.is/MdXc1))
            - > The first (historical) version is described as part of the _[regexp()](https://pubs.opengroup.org/onlinepubs/7908799/xsh/regexp.html)_ \[[Archived](https://archive.is/20130730093704/http://pubs.opengroup.org/onlinepubs/7908799/xsh/regexp.html)\] function in the **XSH** specification.
        - [Regular Expressions/Simple Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Simple_Regular_Expressions) ([Archived](https://archive.is/20241012203436/https://en.wikibooks.org/wiki/Regular_Expressions/Simple_Regular_Expressions))
    - BusyBox
- Basic Regular Expressions (BRE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.3 Basic Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX Basic Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions) [Archived](https://archive.is/20241012215959/https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions)
    - GNU
        - POSIX BRE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
    - BusyBox
- Extended Regular Expressions (ERE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.4 Extended Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX-Extended Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions) [Archived](https://archive.is/20241012220242/https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions)
    - GNU
        - POSIX ERE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
    - BusyBox
- Perl Compatible Regular Expressions (PCRE)
    - [Regular Expressions/Perl-Compatible Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions) ([Archived](https://archive.is/20241012203540/https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions))
    - [Perl Compatible Regular Expressions - Wikipedia](https://en.wikipedia.org/wiki/Perl_Compatible_Regular_Expressions)
        - > While PCRE originally aimed at feature-equivalence with Perl, the two implementations are not fully equivalent. During the PCRE 7.x and Perl 5.9.x phase, the two projects coordinated development, with features being ported between them in both directions. As of Perl 5.10, PCRE is also available as a replacement for Perl's default regular-expression engine through the `re::engine::PCRE` module.
- The Shell pattern matching notation
    - POSIX
        - [Shell Command Language (IEEE Std 1003.1-2024) - 2.14 Pattern Matching Notation](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14)
            - "The `glob` syntax"
    - GNU
        - The `extglob` extension
        - [Pattern Matching (Bash Reference Manual)](https://www.gnu.org/software/bash/manual/html_node/Pattern-Matching.html)
    - BusyBox
    - [Regular Expressions/Shell Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions) ([Archived](https://archive.is/20241012203753/https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions))

## Per application

- `awk`

    - POSIX

        - [awk ( IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/awk.html)

            - [Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/awk.html#tag_20_06_13_04)

                > The _awk_ utility shall make use of the extended regular expression notation (see XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04)) except that it shall allow the use of C-language conventions for escaping special characters within the EREs, as specified in the table in XBD [_5\. File Format Notation_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap05.html#tag_05) for '\\\\', '\\a', '\\b', '\\f', '\\n', '\\r', '\\t', '\\v' and in the following table for other sequences; these escape sequences shall be recognized both inside and outside bracket expressions.

    - GNU
    - BusyBox
    - FreeBSD / macOS

- `sed`

    - POSIX

        - [sed (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/sed.html)

            > The _sed_ utility shall support the REs described in XBD [_9\. Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09); by default it shall use BREs as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03), but if the **\-E** option is used, it shall use EREs as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04).

            Options:

            - > **\-E**
              >
              > Match using extended regular expressions. Treat each pattern specified as an ERE, as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04).

    - GNU
    - BusyBox
    - FreeBSD / macOS

- `grep`

    - POSIX

        - [grep (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/grep.html)

            > By default, an input line shall be selected if any pattern, treated as an entire basic regular expression (BRE) as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03), matches any part of the line excluding the terminating \<newline\>; a null BRE shall match every line.

            Options:

            - > **\-E**
              >
              > Match using extended regular expressions. Treat each pattern specified as an ERE, as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04). If any entire ERE pattern matches some part of an input line excluding the terminating \<newline\>, the line shall be matched. A null ERE shall match every line.

    - GNU
    - FreeBSD / macOS

    - `egrep`, `grep`, `rgrep`

        - POSIX

            - Deprecated by POSIX.

            - [grep (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/grep.html)

                > This _grep_ has been enhanced in an upwards-compatible way to provide the exact functionality of the historical _egrep_ and _fgrep_ commands as well. It was the clear intention of the standard developers to consolidate the three *grep*s into a single command.

                > The old _egrep_ and _fgrep_ commands are likely to be supported for many years to come as implementation extensions, allowing historical applications to operate unmodified.

        - GNU

            - Deprecated by GNU.

            - [Ubuntu Manpage: grep, egrep, fgrep, rgrep - print lines matching a pattern](https://manpages.ubuntu.com/manpages/bionic/en/man1/grep.1.html)

                > In addition, the variant programs **egrep**, **fgrep** and **rgrep** are the same as **grep** **\-E**, **grep** **\-F**, and **grep** **\-r**, respectively. These variants are deprecated, but are provided for backward compatibility.

            - [GNU Grep 3.12](https://www.gnu.org/software/grep/manual/grep.html)

                > What happened to `egrep` and `fgrep`?

                > 7th Edition Unix had commands `egrep` and `fgrep` that were the counterparts of the modern ‘grep -E’ and ‘grep -F’. Although breaking up `grep` into three programs was perhaps useful on the small computers of the 1970s, `egrep` and `fgrep` were deemed obsolescent by POSIX in 1992, removed from POSIX in 2001, deprecated by GNU Grep 2.5.3 in 2007, and changed to issue obsolescence warnings by GNU Grep 3.8 in 2022; eventually, they are planned to be removed entirely.

        - BusyBox
            - Ships `fgrep` and `egrep`.
        - FreeBSD / macOS

- `find`

    - POSIX
        - Options:
            - > **-name** _pattern_
              >
              > The primary shall evaluate as true if the basename of the current pathname matches _pattern_ using the pattern matching notation described in [_2.14 Pattern Matching Notation_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14). The additional rules in [_2.14.3 Patterns Used for Filename Expansion_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14_03) do not apply as this is a matching operation, not an expansion.
            - > **-path** _pattern_
              >
              > The primary shall evaluate as true if the current pathname matches _pattern_ using the pattern matching notation described in [_2.14 Pattern Matching Notation_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14). The additional rules in [_2.14.3 Patterns Used for Filename Expansion_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14_03) do not apply as this is a matching operation, not an expansion.
    - GNU
    - BusyBox
    - FreeBSD / macOS

- `tr`

    - POSIX

        - [tr (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/tr.html#tag_20_126)

            > It should be noted that, despite similarities in appearance, the string operands used by _tr_ are not regular expressions.

    - GNU
    - BusyBox
    - FreeBSD / macOS

- Shell

    - POSIX

        [Shell Command Language (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html)

        - [**2.14 Pattern Matching Notation**](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14)

            > The pattern matching notation described in this section is used to specify patterns for matching character strings in the shell. This notation is also used by some other utilities ([_find_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/find.html), [_pax_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/pax.html), and optionally [_make_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/make.html)) and by some system interfaces ([_fnmatch_()](https://pubs.opengroup.org/onlinepubs/9799919799/functions/fnmatch.html), [_glob_()](https://pubs.opengroup.org/onlinepubs/9799919799/functions/glob.html), and [_wordexp_()](https://pubs.opengroup.org/onlinepubs/9799919799/functions/wordexp.html)).

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
    - BusyBox `ash`
    - FreeBSD
    - macOS
        - macOS uses GNU `bash` as the non-interactive shell.

## Resources

- [Regular Expressions/Print version - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Print_version) ([Archived](https://archive.is/20241012203010/https://en.wikibooks.org/wiki/Regular_Expressions/Print_version))
- [Regular Expression Engine Comparison Chart](https://gist.github.com/CMCDragonkai/6c933f4a7d713ef712145c5eb94a1816)
