#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *line = malloc(16);
  puts("Please input your name:");
  gets(line);
  printf("Your name is %s\n", line);
  free(line);
  return 0;
}
