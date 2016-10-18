#include <iostream>
#include <vector>

int main() {

  std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

  for (auto &v : vec) {
    v = (v % 2 == 0) ? v : v*2;
    std::cout << v << " ";
  }
  std::cout << std::endl;

  return 0;
}

