/* An OOP-like style in C. */

/* The index of arbitrary data types the entity can be initialized in. */
typedef enum { 
  MST_INT,
  MST_FLOAT,
  MST_COUNT, /* Last enum elem. - the count of those data types. */
} MyStructType;

typedef struct {
  char name[32];
  MyStructType type;
  /* Any common properties of the entity are added here. */
} MyHeader;

typedef struct {
  MyHeader head;
  int value;
} MyStructInt;

typedef struct {
  MyHeader head;
  float value;
} MyStructFloat;

/* Must allocate *h MyStructInt or MyStructFloat first. */
void my_set_value(MyHeader *h, double value) {
  if (h->type == MST_INT) {
    ((MyStructInt *)h)->value = (int)value;
  } else {
    ((MyStructFloat *)h)->value = (float)value;
  }
}
