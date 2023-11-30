#include <iostream>

using namespace std;

void swap_pointers(int *a, int *b) {
  if (a != b) { // only proceed if a and b are in different memory locations
    *a ^= *b;   // a now holds the value of b
    *b ^= *a;   // b becomes original value of a
    *a ^= *b;   // a becomes the original value of b
  }
}

int main() {
  int x = 10;
  int y = 20;

  cout << "Before swap: x = " << x << ", y = " << y << endl;
  swap_pointers(&x, &y);
  cout << "After swap: x = " << x << ", y = " << y << endl;

  return 0;
}