#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

using int_array = int[4];
int main() {
  int ia[3][4] = {
    { 0, 1, 2, 3, },
    { 4, 5, 6, 7, },
    { 8, 9, 10, 11, },
  };

  for (int_array &row : ia) {
    for (int &col : row) {
      cout << col << ' ';
    }
    cout << endl;
  }
  cout << "---------" << endl;

  for (int_array *p = ia; p != ia + 3; ++p) {
    for (int *q = *p; q != *p + 4; ++q) {
      cout << *q << ' ';
    }
    cout << endl;
  }
  cout << "---------" << endl;

  return 0;
}

