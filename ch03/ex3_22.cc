#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> text;
  string str;
  while (getline(cin, str)) {
    text.push_back(str);
  }

  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto iter = it->begin(); iter != it->end(); ++iter) {
      *iter = toupper(*iter);
    }
    cout << *it << endl;
  }

  return 0;
}
