#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  int val;

  while (std::cin >> val) {
    vec.push_back(val);
  }

  for (auto i : vec) {
    std::cout << i << std::endl;
  }
  return 0;
}

