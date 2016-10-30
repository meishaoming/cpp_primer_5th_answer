#include <iostream>
#include <string>

int main() {
  std::string str;

  std::cin >> str;

  for (auto &c : str) {
    c = 'X';
  }

  std::cout << str << std::endl;
  return 0;
}
