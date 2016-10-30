#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> vec;
  int val;

  while (cin >> val) {
    vec.push_back(val);
  }

  for (auto it = vec.begin(); it != vec.end(); ++it) {
    *it *= 2;
    cout << *it << endl;
  }

  return 0;
}
