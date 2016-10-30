#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> scores = { "F", "D", "C", "B", "A", "A++", };

int main() {
  string lettergrade;
  int grade;

  while (cin >> grade) {
    if (grade < 60) {
      lettergrade = scores[0];
    } else {
      lettergrade = scores[(grade - 50)/10];
    }
    cout << lettergrade << ' ';
  }
  cout << endl;
  return 0;
}
