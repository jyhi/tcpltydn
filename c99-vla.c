#include <stdio.h>

int main(void) {
  int n = 0;
  int a[n];

  puts("How long do you want?");
  scanf("%d", &n);

  a[n - 1] = 114514;
  printf("%d\n", a[n - 1]);

  return 0;
}
