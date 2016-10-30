#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

#if 0
int main() {
  int val;
  vector<int> vec;

  while (cin >> val) {
    vec.push_back(val);
  }

  for (auto i = 0; i < vec.size() - 1; i += 2) {
    cout << vec[i] + vec[i+1] << " ";
  }
  cout << endl;

  return 0;
}
#else
int main() {
  int val;
  vector<int> vec;

  while (cin >> val) {
    vec.push_back(val);
  }

  for (auto i = 0; i < vec.size() / 2; ++i) {
    cout << vec[i] + vec[vec.size()-1-i] << " ";
  }
  cout << endl;

  return 0;
}
#endif
