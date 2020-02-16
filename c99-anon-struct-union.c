#include <stdio.h>

struct Foo {
  int bar;
  union _baz {
    int   ibaz;
    char *sbaz;
  } baz;
};

int main(void) {
  struct Foo foo = {.bar = 3, .baz.ibaz = 4};
  printf("%d / %d\n", foo.bar, foo.baz.ibaz);

  struct Foo oof = {.bar = 4, .baz.sbaz = "kksk"};
  printf("%d / %s\n", oof.bar, oof.baz.sbaz);

  return 0;
}
