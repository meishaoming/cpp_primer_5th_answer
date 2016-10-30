#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> scores = { "F", "D", "C", "B", "A", "A++", };

int main() {
  string lettergrade;
  int grade;

  while (cin >> grade) {
    lettergrade = (grade < 60) ? scores[0] : scores[(grade - 50)/10];
    cout << lettergrade << ' ';
  }
  cout << endl;
  return 0;
}

