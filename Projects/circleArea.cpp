#include <iostream>

using namespace std;

const double pi{3.14159};
double calcAreaCircle(double radius) { return pi * radius * radius; }

void areaCircle() {
  double radius{12.5};
  cout << "\nEnter the radius of the circle: ";
  cin >> radius;

  cout << "The area of a circle with radius " << radius << " is "
       << calcAreaCircle(radius) << endl;
}

int main() {
  areaCircle();
  return 0;
}