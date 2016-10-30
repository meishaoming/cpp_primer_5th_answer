#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

using std::begin;
using std::end;

int main() {
  int ia[3][4] = {
    { 0, 1, 2, 3, },
    { 4, 5, 6, 7, },
    { 8, 9, 10, 11, },
  };

  for (const auto &row : ia) {
    for (const auto col : row) {
      cout << col << ' ';
    }
  }
  cout << endl;

  for (size_t i = 0; i < 3; ++i) {
    for (size_t j = 0; j < 4; ++j) {
      cout << ia[i][j] << ' ';
    }
  }
  cout << endl;

  for (int (*p)[4] = ia; p < ia + 3; ++p) {
    for (int *q = *p; q < *p + 4; ++q) {
      cout << *q << ' ';
    }
  }
  cout << endl;

  return 0;
}
