#include <iostream>
#include "Sales_data.h"

int main () {
  Sales_data data1, data2;

  std::cin >> data1.bookNo >> data1.units_sold >> data1.price;
  std::cin >> data2.bookNo >> data2.units_sold >> data2.price;

  if (data1.bookNo == data2.bookNo) {
    auto units_sold = data1.units_sold + data2.units_sold;
    auto revenue = data1.units_sold*data1.price + data2.units_sold * data2.price;
    auto price = revenue / units_sold;

    std::cout << data1.bookNo << " "
        << units_sold << " "
        << revenue << " "
        << price
        << std::endl;
  }

  return 0;
}

