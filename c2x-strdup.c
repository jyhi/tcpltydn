#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char const *s =
  "Hello world!";

int main() {
  // This is illegal
  // s[4] = ' ';
  puts(s);

  char *s_dyn = strdup(s);
  s_dyn[4] = ' ';
  puts(s_dyn);
  free(s_dyn);

  return 0;
}
