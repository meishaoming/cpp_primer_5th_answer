#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  char s1[] = "aaaa";
  char s2[] = "bbbbbb";
  char s3[100];

  strcpy(s3, s1);
  strcat(s3, s2);

  cout << s3 << endl;
}

