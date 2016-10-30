#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string str;
  string last_str;
  string max_string;
  unsigned max_occurs = 0;
  unsigned occurs = 0;

  while (cin >> str) {
    if (str == last_str) {
      ++occurs;
    } else {
      if (occurs > max_occurs) {
        max_occurs = occurs;
        max_string = last_str;
      }
      occurs = 1;
      last_str = str;
    }
  }

  cout << max_string << " occurs " << max_occurs << " times." << endl;
  return 0;
}
