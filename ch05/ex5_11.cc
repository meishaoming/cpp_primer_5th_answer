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

  unsigned spaceCnt = 0;
  unsigned tableCnt = 0;
  unsigned newlineCnt = 0;

  char ch;
  while (cin.get(ch)) {
    switch (ch) {
      case 'a':
      case 'A':
        ++aCnt;
        break;
      case 'e':
      case 'E':
        ++eCnt;
        break;
      case 'i':
      case 'I':
        ++iCnt;
        break;
      case 'o':
      case 'O':
        ++oCnt;
        break;
      case 'u':
      case 'U':
        ++uCnt;
        break;

      case ' ': ++spaceCnt; break;
      case '\t': ++tableCnt; break;
      case '\n': ++newlineCnt; break;

      default:
        break;
    }
  }

  cout << "Number of vowel a/A: \t" << aCnt << '\n'
       << "Number of vowel e/E: \t" << eCnt << '\n'
       << "Number of vowel i/I: \t" << iCnt << '\n'
       << "Number of vowel o/O: \t" << oCnt << '\n'
       << "Number of vowel u/U: \t" << uCnt << '\n'
       << "Number of space    : \t" << spaceCnt << '\n'
       << "Number of table    : \t" << tableCnt << '\n'
       << "Number of newline  : \t" << newlineCnt << endl;

  return 0;
}



