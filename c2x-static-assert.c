#include <assert.h>
#include <stdbool.h>

int main(void) {
  // Dynamic assertion
  assert(true == false);

  // Static assertion (C2x)
  static_assert(true == false);

  return 0;
}
