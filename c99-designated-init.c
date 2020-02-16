struct Foo {
  int a;
  int b;
};

int main(void) {
  struct Foo foo = {
    .a = 3,
    .b = 4,
  };

  printf("a = %d, b = %d\n", foo.a, foo.b);

  return 0;
}
