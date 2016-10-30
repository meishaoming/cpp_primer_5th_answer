#include <iostream>
#include <vector>

using std::vector;
using std::string;

template <typename T>
void print_vector(const vector<T> &vec) {
  std::cout << vec.size();
  if (!vec.empty()) {
    std::cout << " :";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
      std::cout << " " << *it;
    }
  }
  std::cout << std::endl;
}

int main() {
  vector<int> v1; // 0 个，
  vector<int> v2(10); // 10 个元素，每个为 0
  vector<int> v3(10, 42); // 10 个元素，每个为 42
  vector<int> v4{10}; // 1 个元素，值为 10
  vector<int> v5{10, 42}; // 2 个元素，值分别为 10，42
  vector<string> v6{10}; // 10 个元素，每个为空
  vector<string> v7{10, "hi"}; // 10 个元素，每个为 "hi"

  print_vector(v1);
  print_vector(v2);
  print_vector(v3);
  print_vector(v4);
  print_vector(v5);
  print_vector(v6);
  print_vector(v7);

  return 0;
}

