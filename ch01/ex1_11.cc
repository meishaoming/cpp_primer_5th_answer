#include <iostream>

int main() {
  std::cout << "Enter two numbers:" << std::endl;

  int v1 = 0;
  int v2 = 0;

  std::cin >> v1 >> v2;

  int sum = 0;
  while (v1 <= v2) {
    sum += v1;
    v1++;
  }
  std::cout << "The product of " << v1 << " and " << v2
      << " is " << sum << std::endl;

  return 0;
}

