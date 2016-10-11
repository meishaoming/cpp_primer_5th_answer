#include <iostream>

void ex1_9() {
  int sum = 0;
  for (int val = 50; val <= 100; val++) {
    sum += val;
  }
  std::cout << "Sum of 50 to 100 inclusive is "
      << sum << std::endl;
}

void ex1_10() {
  for (int val = 10; val >= 0; val--) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}

void ex1_11() {
  std::cout << "Enter two numbers:" << std::endl;

  int v1 = 0;
  int v2 = 0;
  std::cin >> v1 >> v2;

  int sum = 0;

  for (int val = v1; val <= v2; val++) {
    sum += val;
  }
  std::cout << "The product of " << v1 << " and " << v2
      << " is " << sum << std::endl;
}

int main() {
  ex1_9();
  ex1_10();
  ex1_11();

  return 0;
}
