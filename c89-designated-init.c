struct Foo {
  int a;
  int b;
};

int main(void) {
  struct Foo foo;
  foo.a = 3;
  foo.b = 4;

  /* Or
  struct Foo foo = {3, 4};
  */

  printf("a = %d, b = %d\n", foo.a, foo.b);

  return 0;
}
