#ifndef JANK_H
#define JANK_H

#include "lump.h"

/* ---- Jank ----
Jank is a library for Janking it up.
Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint
consectetur cupidatat.*/

#include "j_internal.h"

typedef void JFoo;

/* ---- Popup management ----
Manages Popups.*/

extern JFoo *jank_popup_create();       /* Creates Jank Foo popup */
extern void jank_popup_destroy(JFoo *); /* Destroys Jank Foo popup */

/* ---- Bar management ----
Resolves and updates Bars.*/
typedef struct {
  unsigned int this_is_a;
  unsigned short public_definition_in_jank_h;
} JBar;

extern JBar *jank_bar_create();     /* Creates Jank Bars */
extern void jank_bar_destroy(JBar); /* Destroys Jank Bars */

#endif /* JANK_H */
