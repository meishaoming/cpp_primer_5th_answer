#include <iostream>
#include "TextQuery.h"

void runQueries(std::ifstream &infile) {
  TextQuery tq(infile);
  while (true) {
    std::cout << "enter word to look for, or q to quit: ";
    std::string s;
    if (!(std::cin >> s) || s == "q")
      break;
    print(std::cout, tq.query(s)) << std::endl;
  }
}

int main(int argc, char *argv[])
{
    std::ifstream input (argv[1]);
    if (input) {
      runQueries(input);
    } else {
      std::cerr << "couldn't open: " + std::string(argv[1]);
    }
  return 0;
}
