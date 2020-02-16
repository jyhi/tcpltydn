#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char const *s =
  "Hello world!";

int main() {
  char *hello = malloc(6);
  if (!hello) return 1;

  memccpy(hello, s, ' ', 6);
  hello[4] = '!';

  puts(hello);

  free(hello);
  return 0;
}
