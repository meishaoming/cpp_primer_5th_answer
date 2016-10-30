#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> vec;
  std::string str;

  while (std::cin >> str) {
    vec.push_back(str);
  }

  for (auto i : vec) {
    std::cout << i << std::endl;
  }
  return 0;
}


