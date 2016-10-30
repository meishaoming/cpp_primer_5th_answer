#include <iostream>
#include <string>

#if 0
int main() {
  std::string str1;
  std::string str2;

  std::cin >> str1;
  std::cin >> str2;

  if (str1 == str2) {
    std::cout << str1 << " and " << str2 << " are equal." << std::endl;
  } else {
    std::cout << (str1 > str2 ? str1 : str2) << " is larger." << std::endl;
  }
  return 0;
}

#else
int main() {
  std::string str1;
  std::string str2;

  std::cin >> str1;
  std::cin >> str2;

  if (str1.size() == str2.size()) {
    std::cout << str1 << " and "
        << str2 << " have same length."
        << std::endl;
  } else {
    std::cout << (str1.size() > str2.size() ? str1 : str2)
        << " is loner."
        << std::endl;
  }
  return 0;
}
#endif
