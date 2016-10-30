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
  vector<int> ivec{ 0, 1, 2, 3, 4, 5 };
  int int_arr[6];

  for (auto i = 0; i < ivec.size(); ++i) {
    int_arr[i] = ivec[i];
  }

  for (auto i : int_arr) {
    cout << i << endl;
  }
  return 0;
}

