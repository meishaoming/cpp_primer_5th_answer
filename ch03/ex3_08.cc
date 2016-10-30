#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;

  for (std::string::size_type n = 0;n < str.size(); ++n) {
    str[n] = 'X';
  }
  std::cout << str << std::endl;
  return 0;
}

