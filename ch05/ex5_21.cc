#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, last_s;

  while (cin >> s) {
    if (s == last_s && isupper(s[0])) {
      break;
    } else {
      last_s = s;
    }
  }

  if (s == last_s) {
    cout << s << " occurs twice" << endl;
  } else {
    cout << "no word was repeated." << endl;
  }

  return 0;
}

