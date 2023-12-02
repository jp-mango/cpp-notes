#include <iostream>
#include <string>
using namespace std;

// Defining a class
class Car {
  // Private data members
  string brand;
  string model;
  int year;

public:
  // Constructor
  Car(string x, string y, int z) : brand(x), model(y), year(z) {}

  // Accessor (Getter) functions
  string getBrand() const { return brand; }
  string getModel() const { return model; }
  int getYear() const { return year; }

  // Mutator (Setter) functions
  void setBrand(string b) { brand = b; }
  void setModel(string m) { model = m; }
  void setYear(int y) { year = y; }

  // Member function
  void display() {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year
         << endl;
  }
};

int main() {
  // Creating objects of the Car class
  Car car1("Toyota", "Corolla", 2005);
  Car car2("Honda", "Civic", 2010);

  // Calling member functions
  car1.display();
  car2.display();

  // Using accessor (getter) functions
  cout << "Car1's Brand: " << car1.getBrand() << endl;

  // Using mutator (setter) functions
  car2.setYear(2012);
  cout << "Car2's New Year: " << car2.getYear() << endl;

  // Output notes about classes in C++
  cout << "\n--- C++ Classes Notes ---\n";
  cout << "1. Classes are user-defined data types in C++.\n";
  cout << "2. They contain data members and member functions.\n";
  cout << "3. Data members can be variables of different types.\n";
  cout << "4. Member functions can access and modify data members.\n";
  cout << "5. Constructors are special member functions used for initializing "
          "objects.\n";
  cout << "6. Encapsulation is achieved using private data members.\n";
  cout << "7. Accessor and Mutator functions (getters and setters) provide "
          "controlled access to private members.\n";
  cout << "8. Objects are instances of a class.\n";

  return 0;
}
