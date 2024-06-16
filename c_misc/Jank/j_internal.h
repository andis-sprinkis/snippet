typedef struct {
  unsigned int id;
  unsigned short foo;
}JFoo;

extern JFoo *jank_authenticate();
extern void jank_set_name(JFoo* foo, char *name);
