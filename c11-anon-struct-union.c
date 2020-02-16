#include <stdio.h>

struct Foo {
  int bar;
  union {
    int   ibaz;
    char *sbaz;
  };
};

int main(void) {
  struct Foo foo = {.bar = 3, .ibaz = 4};
  printf("%d / %d\n", foo.bar, foo.ibaz);

  struct Foo oof = {.bar = 4, .sbaz = "kksk"};
  printf("%d / %s\n", oof.bar, oof.sbaz);

  return 0;
}
