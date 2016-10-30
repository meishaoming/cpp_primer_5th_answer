#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  for (auto c : str) {
    if (!ispunct(c)) {
      std::cout << c;
    }
  }
  std::cout << std::endl;
  return 0;
}

