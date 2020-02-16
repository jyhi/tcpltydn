#include <assert.h>
#include <stdbool.h>

int main(void) {
  // Dynamic assertion
  assert(true == false);

  // Static assertion (C11)
  static_assert(
    true == false,
    "true is not false"
  );

  return 0;
}
