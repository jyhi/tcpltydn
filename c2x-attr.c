#include <stdio.h>

[[deprecated]]
int foo() {
  puts("Foo");
  return 1;
}

int main() {
  int f = foo(); // Warning here
  switch (f) {
    case 0:
      [[fallthrough]]
    case 1:
      puts("Bar");
      // Warning here
    default:
      puts("Baz");
      break;
  }

  return 0;
}
