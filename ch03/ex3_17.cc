#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  string str;
  vector<string> vec;

  while (cin >> str) {
    vec.push_back(str);
  }

  for (auto &s : vec) {
    for (auto &c : s) {
      c = toupper(c);
    }
    cout << s << endl;
  }
  return 0;
}

