#include <iostream>

int main() {
  int ia[5] = { 0, 2, 4, 6, 8 };

  for (int *p = ia; p < &ia[5]; ++p) {
    *p = 0;
  }

  return 0;
}
