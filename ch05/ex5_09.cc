#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  unsigned aCnt = 0;
  unsigned eCnt = 0;
  unsigned iCnt = 0;
  unsigned oCnt = 0;
  unsigned uCnt = 0;

  char ch;
  while (cin >> ch) {
    switch (ch) {
      case 'a': ++aCnt; break;
      case 'e': ++eCnt; break;
      case 'i': ++iCnt; break;
      case 'o': ++oCnt; break;
      case 'u': ++uCnt; break;
      default : break;
    }
  }

  cout << "Number of vowel a: \t" << aCnt << '\n'
       << "Number of vowel e: \t" << eCnt << '\n'
       << "Number of vowel i: \t" << iCnt << '\n'
       << "Number of vowel o: \t" << oCnt << '\n'
       << "Number of vowel u: \t" << uCnt << endl;
  return 0;
}


