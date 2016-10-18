#include <iostream>

int main() {
  int val;

  while (std::cin >> val && val != 42)
    ;

  std::cout << "loop end: val " << val << std::endl;
  return 0;
}
