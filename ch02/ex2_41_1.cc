#include <iostream>
#include "Sales_data.h"

int main () {
  Sales_data data;

  while (std::cin >> data.bookNo >> data.units_sold >> data.price) {
    std::cout << data.bookNo << " "
        << data.units_sold << " "
        << data.price * data.units_sold << " "
        << data.price
        << std::endl;
  }

  return 0;
}

