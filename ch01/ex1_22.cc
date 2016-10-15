#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item1, item2;
  Sales_item total;

  std::cin >> item1;
  total = item1;

  while (std::cin >> item2) {
    if (item1.isbn() == item2.isbn()) {
      total += item2;
    } else {
      std::cout << total << std::endl;
      item1 = item2;
      total = item1;
    }
  }

  return 0;
}

