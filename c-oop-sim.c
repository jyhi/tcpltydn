#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int counter = 0;

/***** class Object *****/

typedef struct {
  int id;
} Object;

/* Constructor for Object */
Object *object_new() {
  Object *obj = calloc(1, sizeof(Object));
  obj->id = (counter += 1);

  return obj;
}

/* Destructor for Object */
void object_delete(Object *obj) {
  free(obj);
}

/***** class Thing extends Object *****/

typedef struct {
  Object super;

  char *name;
  void (*sayhi)(const char *prompt);
} Thing;

/* Implement method sayhi */
void thing_sayhi(const char *prompt) {
  printf("%s: Hi! I'm a Thing.\n", prompt);
}

/* Constructor for Thing */
Thing *thing_new(const char *name) {
  Thing *thing = calloc(1, sizeof(Thing));
  thing->super.id = (counter += 1);

  size_t name_len = strlen(name) + 1;
  thing->name = malloc(name_len);
  strncpy(thing->name, name, name_len);

  thing->sayhi = thing_sayhi;

  return thing;
}

/* Destructor for Thing */
void thing_delete(Thing *thing) {
  free(thing->name);
  free(thing);
}

int main(void) {
  Object *obj = object_new();
  Thing *thing = thing_new("Foo");

  printf("Object %d exists.\n", obj->id);
  printf("Thing %s extends Object %d.\n", thing->name, thing->super.id);
  thing->sayhi("Sayhi");

  object_delete(obj);
  thing_delete(thing);

  return 0;
}
