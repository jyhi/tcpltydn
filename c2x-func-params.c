#include <stdio.h>

int foo() {
  puts("Bar");
  return 0;
}

int main(void) {
  printf("Foo ");

  // Illegal in C2x
  // return foo("Baz");

  return foo();
}
