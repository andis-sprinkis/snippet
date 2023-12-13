# When and how to put the C type declarations and definitions in the `.h` or the `.c` files

Answers from https://stackoverflow.com/questions/6316987/should-struct-definitions-go-in-h-or-c-file

1. > Private structures for that file should go in the .c file, with a declaration in the .h file if they are used by any functions in the .h .
   >
   > Public structures should go in the .h file.

1. > > Both should result in the same usability, even if one is by linkage, shouldn't they?
   >
   > No, not when you consider other .c files including the same header. If the definition of the structure is not visible to the compiler, the details of that definition cannot be used. A declaration without a definition (e.g. just `struct s;`) causes the compiler to fail if anything tries to look inside `struct s`, while still allowing it to e.g. compile `struct s *foo;` (as long as `foo` is not later dereferenced).
   >
   > Compare these versions of `api.h` and `api.c`:
   >
   > ```
   > Definition in header:                 Definition in implementation:
   > +---------------------------------+   +---------------------------------+
   > | struct s {                      |   | struct s;                       |
   > |     int internal;               |   |                                 |
   > |     int other_stuff;            |   | extern void                     |
   > | };                              |   | api_func(struct s *foo, int x); |
   > |                                 |   +---------------------------------+
   > | extern void                     |   +---------------------------------+
   > | api_func(struct s *foo, int x); |   | #include "api.h"                |
   > +---------------------------------+   |                                 |
   > +---------------------------------+   | struct s {                      |
   > | #include "api.h"                |   |     int internal;               |
   > |                                 |   |     int other_stuff;            |
   > | void                            |   | };                              |
   > | api_func(struct s *foo, int x)  |   |                                 |
   > | {                               |   | void                            |
   > |     foo->internal = x;          |   | api_func(struct s *foo, int x)  |
   > | }                               |   | {                               |
   > +---------------------------------+   |     foo->internal = x;          |
   >                                       | }                               |
   >                                       +---------------------------------+
   > ```
   >
   > This client of the API works with either version:
   >
   > ```c
   > #include "api.h"
   >
   > void good(struct s *foo)
   > {
   >     api_func(foo, 123);
   > }
   > ```
   >
   > This one pokes around in the implementation details:
   >
   > ```c
   > #include "api.h"
   >
   > void bad(struct s *foo)
   > {
   >     foo->internal = 123;
   > }
   > ```
   >
   > which will work with the "definition in header" version, but not with the "definition in implementation" version, as in the latter case the compiler has no visibility of the layout of the structure:
   >
   > ```sh
   > $ gcc -Wall -c bad.c
   > bad.c: In function 'bad':
   > bad.c:5: error: dereferencing pointer to incomplete type
   > $
   > ```
   >
   > So, the "definition in implementation" version protects against accidental or deliberate misuse of private implementation details.

The answers from StackOverflow are licensed under the [CC BY-SA 3.0](https://creativecommons.org/licenses/by-sa/4.0/) license.
