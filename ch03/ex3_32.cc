#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arr[10];
	
	for (size_t i = 0; i < 10; ++i) {
		arr[i] = i;
	}

	int arr1[10];

	for (size_t i = 0; i < 10; ++i) {
		arr1[i] = arr[i];
    cout << arr1[i] << endl;
	}	

  // --------
 
  vector<int> vec;
  for (int i = 0; i < 10; ++i)
    vec.push_back(i);

  vector<int> vec1;

  vec1 = vec;

  for (auto i : vec1)
    cout << i << endl;
	return 0;
}
