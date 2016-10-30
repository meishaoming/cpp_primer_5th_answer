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

  unsigned ffCnt = 0;
  unsigned flCnt = 0;
  unsigned fiCnt = 0;

  char last_ch = 0;
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
        if (last_ch == 'f')
          ++fiCnt;
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

      case ' ':
        ++spaceCnt;
        break;
      case '\t':
        ++tableCnt;
        break;
      case '\n':
        ++newlineCnt;
        break;

      case 'f':
        if (last_ch == 'f')
          ++ffCnt;
        break;
      case 'l':
        if (last_ch == 'f')
          ++flCnt;
        break;

      default:
        break;
    }
    last_ch = ch;
  }

  cout << "Number of vowel a/A: \t" << aCnt << '\n'
       << "Number of vowel e/E: \t" << eCnt << '\n'
       << "Number of vowel i/I: \t" << iCnt << '\n'
       << "Number of vowel o/O: \t" << oCnt << '\n'
       << "Number of vowel u/U: \t" << uCnt << '\n'
       << "Number of space    : \t" << spaceCnt << '\n'
       << "Number of table    : \t" << tableCnt << '\n'
       << "Number of newline  : \t" << newlineCnt << '\n'
       << "Number of ff       : \t" << ffCnt << '\n'
       << "Number of fl       : \t" << flCnt << '\n'
       << "Number of fi       : \t" << fiCnt << '\n'
       << endl;

  return 0;
}




