#include <iostream>
#include <string>

int main() {
  std::string str;
  std::string sum;

  while (std::cin >> str) {
    if (!sum.empty()) {
      sum += " ";
    }
    sum += str;
  }

  std::cout << sum << std::endl;
  return 0;
}
