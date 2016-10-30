#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  int val;
  vector<int> vec;

  while (cin >> val) {
    vec.push_back(val);
  }

  for (auto it = vec.begin();
       it != vec.end() && (it + 1) != vec.end(); it += 2) {
      cout << *it + *(it + 1) << " ";
  }
  cout << endl;

  return 0;
}
