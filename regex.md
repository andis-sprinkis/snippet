# Regular expressions

- Simple Regular Expressions (SRE)
    - Widely used on Unix based systems for backwards compatibility
    - Most regular-expression-aware Unix utilities, use it by default while providing support for extended regular expressions with command line arguments
    - Deprecated on POSIX compliant systems and should not be used by new utilities
- Basic Regular Expressions (BRE)
    - POSIX
        - As defined in the IEEE POSIX standard 1003.2
    - GNU
        - POSIX BRE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
- Extended Regular Expressions (ERE)
    - POSIX
        - As defined in the IEEE POSIX standard 1003.2
    - GNU
        - POSIX ERE with GNU extensions
        - Used in the GNU implementations of classic UNIX tools
- Perl Compatible Regular Expressions (PCRE)

## Per application

- `awk`
    - POSIX
    - GNU
- `sed`
    - POSIX
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
