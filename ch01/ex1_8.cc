#include <iostream>

int main() {
  std::cout << "/*";
  std::cout << "*/";
  //std::cout << /* "*/" */;  // illegal
  std::cout << /* "*/" /* "/*" */;
  std::cout << std::endl;
  return 0;
}
