#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  size_t size; // <- Must have other members
  char data[]; // <- Array at the end
} String;

int main(void) {
  String *str = malloc(sizeof(String) + 32);
  strcpy(str->data, "Hello world!");
  str->size = 13;

  printf("String %s has length %zu\n",
    str->data, str->size);

  free(str);

  return 0;
}
