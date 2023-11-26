#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3};
  for (auto val : vec) {
    cout << val << endl;
    for (long long unsigned int i{1}; i < vec.size(); i++) {
      cout << i << endl;
    }
  }
  return 0;
}