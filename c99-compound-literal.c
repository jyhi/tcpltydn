struct Foo {
  int a;
  int b;
};

int main(void) {
  struct Foo foo = {0, 0};
  printf("a = %d, b = %d\n", foo.a, foo.b);

  foo = (struct Foo) {.b = 4, .a = 3};
  printf("a = %d, b = %d\n", foo.a, foo.b);

  return 0;
}
