#include <stdbool.h>

bool foo(_Bool b) {
  if (b)
    return false;
  else
    return true;
}

int main(void) {
  if (foo(false))
    return 0;
  else
    return 1;
}
