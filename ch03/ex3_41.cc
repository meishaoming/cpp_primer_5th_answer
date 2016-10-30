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
  int int_arr[] = { 0, 1, 2, 3, 4, 5 };

  vector<int> ivec(begin(int_arr), end(int_arr));

  for (auto i : ivec) {
    cout << i << endl;
  }

  return 0;
}
