#include <stdio.h>

#define PRINT_TWO_SUMS(a, b, s) \
  { \
    printf("%d + %d = %d\n", a, b, s); \
  }

#define TWO_SUMS \
  X(0, 0, 0) \
  X(0, 1, 1) \
  X(1, 0, 1) \
  X(1, 1, 2)

int main(void) {
#define X PRINT_TWO_SUMS
TWO_SUMS
#undef X

  return 0;
}
