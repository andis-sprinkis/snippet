-   `_array` - array of data
-   `_type` - usually an enum (in header)
-   `_node` - links to other nodes
-   `_entity` - generic networked thing
-   `_handle` - pointer to opaque data structure
-   `_func` - function pointer or a function used a function pointer
-   `_internal` - function internal to a module or an .h file

```
i, j, k (temp vars, ints)
count, length, found, next, previous, array, list
f (f1, f2 etc. - temp vars, floats)
vec...
```

```
MY_DEFINE
MyType
my_function()
my_variable
```

```
MyModule
mymodule.h
mm_internal.h
mm_something.c
mm_something_set.c
```

```
mymodule_someobj_create()
mymodule_someobj_destroy()

mymodule_someobj_move()
mymodule_someobj_text_set()
mymodule_someobj_save()
mymodule_someobj_load()
mymodule_someobj_boolean_get()
mymodule_someobj_boolean_set()
```
