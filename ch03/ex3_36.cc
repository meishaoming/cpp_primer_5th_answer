#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int ia0[5] = { 0, 2, 4, 6, 8 };
  int ia1[5] = { 0, 2, 4, 6, 9 };

  for (size_t i = 0; i < 5; i++) {
    if (ia0[i] != ia1[i]) {
      cout << "array different" << endl;
      return 0;
    }
  }
  cout << "array same" << endl;
  return 0;
}

