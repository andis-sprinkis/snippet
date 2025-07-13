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
    - FreeBSD
    - macOS
- Basic Regular Expressions (BRE)

    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.3 Basic Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX Basic Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions) ([Archived](https://archive.is/20241012215959/https://en.wikibooks.org/wiki/Regular_Expressions/POSIX_Basic_Regular_Expressions))
    - GNU

        - POSIX BRE with GNU extensions. Used in the GNU implementations of classic UNIX tools.
        - [GNU Regular Expression Extensions - Gnulib Regex Module](https://www.regular-expressions.info/gnu.html) ([Archived](https://archive.is/20250302183430/https://www.regular-expressions.info/gnu.html))

            > GNU’s implementation of these tools follows the [POSIX standard](https://www.regular-expressions.info/posix.html), with added GNU extensions. The effect of the GNU extensions is that both the [Basic Regular Expressions](https://www.regular-expressions.info/posix.html#bre) flavor and the [Extended Regular Expressions](https://www.regular-expressions.info/posix.html#ere) flavor provide exactly the same functionality. The only difference is that BRE’s will use backslashes to give various characters a special meaning, while ERE’s will use backslashes to take away the special meaning of the same characters.

            > The GNU extensions make the BRE and ERE flavors identical in functionality.

            > On top of what POSIX BRE provides as described above, the GNU extension provides \\? and \\+ as an alternative syntax to \\{0,1\\} and \\{1,\\}. It adds [alternation](https://www.regular-expressions.info/alternation.html) via \\|, something sorely missed in POSIX BREs. These extensions in fact mean that GNU BREs have exactly the same features as GNU EREs, except that +, ?, |, braces and parentheses need backslashes to give them a special meaning instead of take it away.

    - BusyBox
    - FreeBSD
    - macOS

- Extended Regular Expressions (ERE)
    - POSIX
        - [IEEE Std 1003.1-2024 - 9. Regular Expressions - 9.4 Extended Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04) ([Archived](https://archive.is/20250518161456/https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html))
        - [Regular Expressions/POSIX-Extended Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions) ([Archived](https://archive.is/20241012220242/https://en.wikibooks.org/wiki/Regular_Expressions/POSIX-Extended_Regular_Expressions))
    - GNU
        - POSIX ERE with GNU extensions. Used in the GNU implementations of classic UNIX tools.
        - [GNU Regular Expression Extensions - Gnulib Regex Module](https://www.regular-expressions.info/gnu.html)
            > POSIX ERE does not support [backreferences](https://www.regular-expressions.info/backref.html). The GNU Extension adds them, using the same \\1 through \\9 syntax.
    - BusyBox
    - FreeBSD
    - macOS
- Additional GNU extensions

    - [GNU Regular Expression Extensions - Gnulib Regex Module](https://www.regular-expressions.info/gnu.html)

        > The GNU extensions not only make both flavors identical. They also adds some new syntax and several brand new features. The [shorthand classes](https://www.regular-expressions.info/shorthand.html) \\w, \\W, \\s and \\S can be used instead of \[\[:alnum:\]\_\], \[^\[:alnum:\]\_\], \[\[:space:\]\] and \[^\[:space:\]\]. You can use these directly in the regex, but not inside bracket expressions. A backslash inside a bracket expression is always a literal.

        > The new features are [word boundaries](https://www.regular-expressions.info/wordboundaries.html) and [anchors](https://www.regular-expressions.info/anchors.html). Like modern flavors, GNU supports \\b to match at a position that is at a word boundary, and \\B at a position that is not. \\< matches at a position at the start of a word, and \\> matches at the end of a word. The anchor \\\` (backtick) matches at the very start of the subject string, while \\' (single quote) matches at the very end. These are useful with tools that can match a regex against multiple lines of text at once, as then ^ will match at the start of a line, and $ at the end.

- Perl Compatible Regular Expressions (PCRE)
    - [Regular Expressions/Perl-Compatible Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions) ([Archived](https://archive.is/20241012203540/https://en.wikibooks.org/wiki/Regular_Expressions/Perl-Compatible_Regular_Expressions))
    - [Perl Compatible Regular Expressions - Wikipedia](https://en.wikipedia.org/wiki/Perl_Compatible_Regular_Expressions)
        - > While PCRE originally aimed at feature-equivalence with Perl, the two implementations are not fully equivalent. During the PCRE 7.x and Perl 5.9.x phase, the two projects coordinated development, with features being ported between them in both directions. As of Perl 5.10, PCRE is also available as a replacement for Perl's default regular-expression engine through the `re::engine::PCRE` module.
- The Shell pattern matching notation, parameter expansion
    - [Regular Expressions/Shell Regular Expressions - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions) ([Archived](https://archive.is/20241012203753/https://en.wikibooks.org/wiki/Regular_Expressions/Shell_Regular_Expressions))
    - See the 'Per application - Shell' section below.

## Per application

- `ed`

    - POSIX

        - [ed (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/ed.html)

            > The _ed_ utility shall support basic regular expressions, as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03).

    - GNU
    - BusyBox
    - FreeBSD
    - macOS

- `ex`

    - POSIX

        - [ex (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/ex.html)

            > The _ex_ utility shall support regular expressions that are a superset of the basic regular expressions described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03).

            `ex` workflows is heavily based around the regular expressions use. In IEEE Std 1003.1-2024 there are a lot of rules and guidelines to adhere around the implementation consitency, extending BRE functionality and the historical practices.

    - GNU
    - BusyBox
    - FreeBSD
    - macOS

- `vi`

    - POSIX

        - [vi (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/vi.html)

            > The enhanced regular expressions supported by _vi_ are described in [_Regular Expressions in ex_](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/ex.html#tag_20_40_13_58).

    - GNU
    - BusyBox

        - [Busybox vi tutorial - Krzysztof Adamski](https://k.japko.eu/busybox-vi-tutorial.html)

            > This tutorial assumes that you have `busybox vi` with all additional features enabled. Note however, that VI_REGEX_SEARCH is disabled in many installations which disables using regular expressions when searching.

    - FreeBSD
    - macOS

- `awk`

    - POSIX

        - [awk ( IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/awk.html)

            - [Regular Expressions](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/awk.html#tag_20_06_13_04)

                > The _awk_ utility shall make use of the extended regular expression notation (see XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04)) except that it shall allow the use of C-language conventions for escaping special characters within the EREs, as specified in the table in XBD [_5\. File Format Notation_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap05.html#tag_05) for '\\\\', '\\a', '\\b', '\\f', '\\n', '\\r', '\\t', '\\v' and in the following table for other sequences; these escape sequences shall be recognized both inside and outside bracket expressions.

    - GNU
    - BusyBox
    - FreeBSD
    - macOS

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
        - [BusyBox - Command help](https://www.busybox.net/downloads/BusyBox.html)
    - FreeBSD

        - [sed(1)](https://man.freebsd.org/cgi/man.cgi?query=sed&sektion=1&format=html)

            > The regular expressions used in **sed**, by default, are basic regular ex- pressions (BREs, see [_re_format_(7)](https://man.freebsd.org/cgi/man.cgi?query=re_format&sektion=7&apropos=0&manpath=FreeBSD+14.3-RELEASE+and+Ports) for more information), but extended (modern) regular expressions can be used instead if the **\-E** flag is given.

            > The **sed** utility is expected to be a superset of the IEEE Std 1003.2 ("POSIX.2") specification.

            > The **\-E**, **\-I**, **\-a** and **\-i** options, the special meaning of **\-f** **\-**, the prefix- ing "+" in the second member of an address range, as well as the "I" flag to the address regular expression and substitution command are non-standard FreeBSD extensions and may not be available on other operating systems.

            Options:

            > **\-E** Interpret regular expressions as extended (modern) regular ex- pressions rather than basic regular expressions (BRE's). The [_re_format_(7)](https://man.freebsd.org/cgi/man.cgi?query=re_format&sektion=7&apropos=0&manpath=FreeBSD+14.3-RELEASE+and+Ports) manual page fully describes both formats.

            ***

            From [FreeBSD - re_format(7) - Miscellaneous Information Manual](https://man.freebsd.org/cgi/man.cgi?re_format):

            > Regular expressions ("REs"), as defined in IEEE Std 1003.2 ("POSIX.2"), come in two forms: modern REs (roughly those of [_egrep_(1)](https://man.freebsd.org/cgi/man.cgi?query=egrep&sektion=1&apropos=0&manpath=FreeBSD+14.3-RELEASE+and+Ports); 1003.2 calls these "extended" REs) and obsolete REs (roughly those of [_ed_(1)](https://man.freebsd.org/cgi/man.cgi?query=ed&sektion=1&apropos=0&manpath=FreeBSD+14.3-RELEASE+and+Ports); 1003.2 "basic" REs). Obsolete REs mostly exist for backward compatibility in some old programs; they will be discussed at the end. IEEE Std 1003.2 ("POSIX.2") leaves some aspects of RE syntax and semantics open; \`<\*\*>' marks decisions on these aspects that may not be fully portable to other IEEE Std 1003.2 ("POSIX.2") implementations.

            Same applies to the macOS version of `sed`.

    - macOS

        - [SED(1) - June 10, 2020 - macOS 15.4](https://manp.gs/mac/1/sed) ([Archived](https://archive.is/20250712115551/https://manp.gs/mac/1/sed))

            > The `sed` utility is expected to be a superset of the IEEE Std 1003.2 (“POSIX.2”) specification.

            > The `-E`, `-I`, `-a` and `-i` options, the special meaning of `-f` `-`, the prefixing “+” in the second member of an address range, as well as the “I” flag to the address regular expression and substitution command are non-standard FreeBSD extensions and may not be available on other operating systems.

            > The regular expressions used in `sed`, by default, are basic regular expressions (BREs, see [re_format(7)](https://manp.gs/mac/7/re_format) for more information), but extended (modern) regular expressions can be used instead if the `-E` flag is given.

            Options:

            - > [`-E`](https://manp.gs/mac/1/sed#E)

                > Interpret regular expressions as extended (modern) regular expressions rather than basic regular expressions (BRE's). The [re_format(7)](https://manp.gs/mac/7/re_format) manual page fully describes both formats.

            - > [`-H`](https://manp.gs/mac/1/sed#H)

                > Enable enhanced features in the regular expression syntax. Note that this option is independent of the `-E` option. See [re_format(7)](https://manp.gs/mac/7/re_format) for details.

                From [RE_FORMAT(7) - ENHANCED FEATURES](https://manp.gs/mac/7/re_format#ENHANCED_FEATURES):

                > When the `REG_ENHANCED` flag is passed to one of the [`regcomp`](https://manp.gs/mac/7/re_format#regcomp)() variants, additional features are activated. Like the enhanced `regex` implementations in scripting languages such as [perl(1)](https://manp.gs/mac/1/perl) and [python(1)](https://manp.gs/mac/1/python), these additional features may conflict with the IEEE Std 1003.2 (“POSIX.2”) standards in some ways. Use this with care in situations which require portability (including to past versions of the Mac OS X using the previous `regex` implementation).

                **This option does not exist in the FreeBSD `sed`.**

- `grep`

    - POSIX

        - [grep (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/grep.html)

            > By default, an input line shall be selected if any pattern, treated as an entire basic regular expression (BRE) as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03), matches any part of the line excluding the terminating \<newline\>; a null BRE shall match every line.

            Options:

            - > **\-E**
              >
              > Match using extended regular expressions. Treat each pattern specified as an ERE, as described in XBD [_9.4 Extended Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_04). If any entire ERE pattern matches some part of an input line excluding the terminating \<newline\>, the line shall be matched. A null ERE shall match every line.

            - > **\-F**
              >
              > Match using fixed strings. Treat each pattern specified as a string instead of a regular expression. If an input line contains any of the patterns as a contiguous sequence of bytes, the line shall be matched. A null string shall match every line.

            - > **\-e** _pattern_list_
              >
              > Specify one or more patterns to be used during the search for input. The application shall ensure that patterns in _pattern_list_ are separated by a <newline>. A null pattern can be specified by two adjacent <newline> characters in _pattern_list_. Unless the **\-E** or **\-F** option is also specified, each pattern shall be treated as a BRE, as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03). Multiple **\-e** and **\-f** options shall be accepted by the _grep_ utility. All of the specified patterns shall be used when matching lines, but the order of evaluation is unspecified.

            - > **\-f** _pattern_file_
              >
              > Read one or more patterns from the file named by the pathname _pattern_file_. Patterns in _pattern_file_ shall be terminated by a <newline>. A null pattern can be specified by an empty line in _pattern_file_. Unless the **\-E** or **\-F** option is also specified, each pattern shall be treated as a BRE, as described in XBD [_9.3 Basic Regular Expressions_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_03).

            - > **\-i**
              >
              > Perform pattern matching in a case-insensitive manner; see XBD [_9.2 Regular Expression General Requirements_](https://pubs.opengroup.org/onlinepubs/9799919799/basedefs/V1_chap09.html#tag_09_02).

    - GNU
    - BusyBox
        - [BusyBox - Command help](https://www.busybox.net/downloads/BusyBox.html)
    - FreeBSD
    - macOS

        - [GREP(1)](https://manp.gs/mac/1/grep)

            > `grep` is used for simple patterns and basic regular expressions (BREs); `egrep` can handle extended regular expressions (EREs). See [re_format(7)](https://manp.gs/mac/7/re_format) for more information on regular expressions. `fgrep` is quicker than both `grep` and `egrep`, but can only handle fixed patterns (i.e., it does not interpret regular expressions). Patterns may consist of one or more lines, allowing any of the pattern lines to match a portion of the input.

            Options:

            - > [`-E`](https://manp.gs/mac/1/grep#E), `--extended-regexp`
              >
              > Interpret pattern as an extended regular expression (i.e., force `grep` to behave as `egrep`).

            - > [`-F`](https://manp.gs/mac/1/grep#F), `--fixed-strings`
              >
              > Interpret pattern as a set of fixed strings (i.e., force `grep` to behave as `fgrep`).

            - > [`-e`](https://manp.gs/mac/1/grep#e) pattern, `--regexp=`pattern
              >
              > Specify a pattern used during the search of the input: an input line is selected if it matches any of the specified patterns. This option is most useful when multiple `-e` options are used to specify multiple patterns, or when a pattern begins with a dash (‘-’).

            - > [`-i`](https://manp.gs/mac/1/grep#i), `--ignore-case`
              >
              > Perform case insensitive matching. By default, `grep` is case sensitive.

            - > [`--include`](https://manp.gs/mac/1/grep#include) pattern
              >
              > If specified, only files matching the given filename pattern are searched. Note that `--include` and `--exclude` patterns are processed in the order given. If a name matches multiple patterns, the latest matching rule wins. Patterns are matched to the full path specified, not only to the filename component.

            - > [`--include-dir`](https://manp.gs/mac/1/grep#include-dir) pattern
              >
              > If `-R` is specified, only directories matching the given filename pattern are searched. Note that `--include-dir` and `--exclude-dir` patterns are processed in the order given. If a name matches multiple patterns, the latest matching rule wins.

            - > [`--exclude`](https://manp.gs/mac/1/grep#exclude) pattern
              >
              > If specified, it excludes files matching the given filename pattern from the search. Note that `--exclude` and `--include` patterns are processed in the order given. If a name matches multiple patterns, the latest matching rule wins. If no `--include` pattern is specified, all files are searched that are not excluded. Patterns are matched to the full path specified, not only to the filename component.

            - > [`--exclude-dir`](https://manp.gs/mac/1/grep#exclude-dir) pattern
              >
              > If `-R` is specified, it excludes directories matching the given filename pattern from the search. Note that `--exclude-dir` and `--include-dir` patterns are processed in the order given. If a name matches multiple patterns, the latest matching rule wins. If no `--include-dir` pattern is specified, all directories are searched that are not excluded.

            - > [`-G`](https://manp.gs/mac/1/grep#G), `--basic-regexp`
              >
              > Interpret pattern as a basic regular expression (i.e., force `grep` to behave as traditional `grep`).

            - > [`-w`](https://manp.gs/mac/1/grep#w), `--word-regexp`
              >
              > The expression is searched for as a word (as if surrounded by ‘\[\[:<:\]\]’ and ‘\[\[:>:\]\]’; see [re_format(7)](https://manp.gs/mac/7/re_format)). This option has no effect if `-x` is also specified.

            - > [`-x`](https://manp.gs/mac/1/grep#x), `--line-regexp`
              >
              > Only input lines selected against an entire fixed string or regular expression are considered to be matching lines.

    - `egrep`, `fgrep`, `rgrep`

        - POSIX

            - `egrep` and `fgrep` are deprecated by POSIX, `rgrep` is not specified.

            - [grep (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/grep.html)

                > This _grep_ has been enhanced in an upwards-compatible way to provide the exact functionality of the historical _egrep_ and _fgrep_ commands as well. It was the clear intention of the standard developers to consolidate the three *grep*s into a single command.

                > The old _egrep_ and _fgrep_ commands are likely to be supported for many years to come as implementation extensions, allowing historical applications to operate unmodified.

        - GNU

            - Deprecated by GNU.

            - (OLD) [Ubuntu Manpage: grep, egrep, fgrep, rgrep - print lines matching a pattern](https://manpages.ubuntu.com/manpages/bionic/en/man1/grep.1.html)

                > In addition, the variant programs **egrep**, **fgrep** and **rgrep** are the same as **grep** **\-E**, **grep** **\-F**, and **grep** **\-r**, respectively. These variants are deprecated, but are provided for backward compatibility.

            - [GNU Grep 3.12](https://www.gnu.org/software/grep/manual/grep.html)

                > What happened to `egrep` and `fgrep`?

                > 7th Edition Unix had commands `egrep` and `fgrep` that were the counterparts of the modern ‘grep -E’ and ‘grep -F’. Although breaking up `grep` into three programs was perhaps useful on the small computers of the 1970s, `egrep` and `fgrep` were deemed obsolescent by POSIX in 1992, removed from POSIX in 2001, deprecated by GNU Grep 2.5.3 in 2007, and changed to issue obsolescence warnings by GNU Grep 3.8 in 2022; eventually, they are planned to be removed entirely.

        - FreeBSD

            - Ships `fgrep`, `egrep` and `rgrep`.

            - [grep(1)](https://man.freebsd.org/cgi/man.cgi?query=grep&apropos=0&sektion=1&manpath=FreeBSD+14.3-RELEASE+and+Ports&arch=default&format=html)

                > **grep** is used for simple patterns and basic regular expressions (BREs); **egrep** can handle extended regular expressions (EREs). See [_re_format_(7)](https://man.freebsd.org/cgi/man.cgi?query=re_format&sektion=7&apropos=0&manpath=FreeBSD+14.3-RELEASE+and+Ports) for more information on regular expressions. **fgrep** is quicker than both **grep** and **egrep**, but can only handle fixed patterns (i.e., it does not interpret regular expressions). Patterns may consist of one or more lines, allowing any of the pattern lines to match a portion of the input.

                - [bzgrep(1)](https://man.freebsd.org/cgi/man.cgi?query=bzgrep&apropos=0&sektion=1&manpath=FreeBSD+14.3-RELEASE+and+Ports&arch=default&format=html)

                    > zgrep, zegrep, zfgrep, bzgrep, bzegrep, bzfgrep, lzgrep, lzegrep, lzfgrep, xzgrep, xzegrep, xzfgrep, zstdgrep, zstdegrep, zstdfgrep -- grep compressed files

                    > Allow [_grep_(1)](https://man.freebsd.org/cgi/man.cgi?query=grep&sektion=1&apropos=0&manpath=FreeBSD+14.3-RELEASE+and+Ports) to read compressed files.

        - BusyBox
            - Ships `fgrep` and `egrep`.
            - [BusyBox - Command help](https://www.busybox.net/downloads/BusyBox.html)
        - macOS

            [GREP(1)](https://manp.gs/mac/1/grep)

            > `zgrep`, `zegrep`, and `zfgrep` act like `grep`, `egrep`, and `fgrep`, respectively, but accept input files compressed with the [compress(1)](https://manp.gs/mac/1/compress) or [gzip(1)](https://manp.gs/mac/1/gzip) compression utilities. `bzgrep`, `bzegrep`, and `bzfgrep` act like `grep`, `egrep`, and `fgrep`, respectively, but accept input files compressed with the [bzip2(1)](https://manp.gs/mac/1/bzip2) compression utility.

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

        - `man find` (findutils 4.10.0-3)

            Options:

            - > -regextype type
              >
              > Changes the regular expression syntax understood by -regex and -iregex tests which occur later on the command line. To see which regular expression types are known, use -regextype help. The Texinfo documentation (see SEE ALSO) explains the meaning of and differences between the various types of regular expression. If you do not use this option, find behaves as if the regular expression type emacs had been specified.

                The `find -regextype help` output:

                > find: Unknown regular expression type ‘help’; valid types are ‘findutils-default’, ‘ed’, ‘emacs’, ‘gnu-awk’, ‘grep’, ‘posix-awk’, ‘awk’, ‘posix-basic’, ‘posix-egrep’, ‘egrep’, ‘posix-extended’, ‘posix-minimal-basic’, ‘sed’.

            - > -iregex pattern
              >
              > Like -regex, but the match is case insensitive.

            - > -regex pattern
              >
              > File name matches regular expression pattern. This is a match on the whole path, not a search. For example, to match a file named ./fubar3, you can use the regular expression `.*bar.` or `.*b.*3`, but not `f.*r3`. The regular expressions understood by find are by default Emacs Regular Expressions, but this can be changed with the -regextype option.

            The `-lname`, `-name`, `-path`, `-wholename`, `-ilname`, `-context` options *pattern* argument refers to 'shell pattern', not regular expression.

    - BusyBox
        - [BusyBox - Command help](https://www.busybox.net/downloads/BusyBox.html)
    - FreeBSD
        - [find](https://man.freebsd.org/cgi/man.cgi?query=find&apropos=0&sektion=0&manpath=FreeBSD+14.3-RELEASE+and+Ports&arch=default&format=html)
    - macOS
        - [FIND(1)](https://manp.gs/mac/1/find)

- `tr`

    - POSIX

        - [tr (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/tr.html#tag_20_126)

            > It should be noted that, despite similarities in appearance, the string operands used by _tr_ are not regular expressions.

    - GNU, BusyBox, FreeBSD, macOS
        - Don't add any functionality related to regular expressions.

- Shell

    - POSIX

        [Shell Command Language (IEEE Std 1003.1-2024)](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html)

        - [**2.6.2 Parameter Expansion**](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_06_02)

            > The following four varieties of parameter expansion provide for character substring processing. In each case, pattern matching notation (see [2.14 Pattern Matching Notation](https://pubs.opengroup.org/onlinepubs/9799919799/utilities/V3_chap02.html#tag_19_14)), rather than regular expression notation, shall be used to evaluate the patterns. \[...\]

            ```
            ${parameter%[word]}
            ${parameter%%[word]}
            ${parameter#[word]}
            ${parameter##[word]}
            ```

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

    - GNU

        - `bash`

            - The `extglob` extension

                - > If the `extglob` shell option is enabled using the `shopt` builtin, the shell recognizes several extended pattern matching operators. In the following description, a pattern-list is a list of one or more patterns separated by a ‘|’.

                    ```
                    ?(pattern-list)
                    *(pattern-list)
                    +(pattern-list)
                    @(pattern-list)
                    !(pattern-list)
                    ```

            - [Pattern Matching (Bash Reference Manual)](https://www.gnu.org/software/bash/manual/html_node/Pattern-Matching.html)

    - BusyBox
        - `ash`
            - [Almquist shell - Wikipedia](https://en.wikipedia.org/wiki/Almquist_shell)
                - [README « shell - busybox - BusyBox: The Swiss Army Knife of Embedded Linux](https://git.busybox.net/busybox/tree/shell/README)
                - [ash variants - BusyBox](https://www.in-ulm.de/~mascheck/various/ash/#busybox)
    - FreeBSD

        - [sh(1)](https://man.freebsd.org/cgi/man.cgi?query=sh&sektion=1&format=html)

            From [FreeBSD Quickstart Guide for Linux® Users](https://docs.freebsd.org/en/articles/linux-users/):

            > \[..\] the Bourne shell-compatible [sh(1)](https://man.freebsd.org/cgi/man.cgi?query=sh&sektion=1&format=html) as the default user shell. \[...\] [sh(1)](https://man.freebsd.org/cgi/man.cgi?query=sh&sektion=1&format=html) is very similar to Bash but with a much smaller feature-set.

    - macOS
        - macOS uses GNU `bash` as the non-interactive shell and `zsh` as the interactive shell. See the GNU `bash` details above.
        - `zsh`
            - [regular expression - What kind of patterns can I use in zsh parameter expansion? - Unix & Linux Stack Exchange](https://unix.stackexchange.com/questions/557473/what-kind-of-patterns-can-i-use-in-zsh-parameter-expansion/557482#557482)
            - [zsh: 14 Expansion](https://zsh.sourceforge.io/Doc/Release/Expansion.html#Expansion)

## Resources

- [Regular Expressions/Print version - Wikibooks](https://en.wikibooks.org/wiki/Regular_Expressions/Print_version) ([Archived](https://archive.is/20241012203010/https://en.wikibooks.org/wiki/Regular_Expressions/Print_version))
- [Regular Expression Engine Comparison Chart](https://gist.github.com/CMCDragonkai/6c933f4a7d713ef712145c5eb94a1816)
- [macOS man pages](https://manp.gs/mac/)
- [FreeBSD Manual Pages](https://man.freebsd.org/cgi/man.cgi)
