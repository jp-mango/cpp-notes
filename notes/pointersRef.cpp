#include <iostream>
#include <string>
#include <vector>

using namespace std;
// A pointer stores the memory address of another variable
int main() {
  cout << "Pointer Notes\n" << endl;

  cout
      << "1. Definition:\n"
      << "   - A pointer in C++ is a variable that stores the memory address "
         "of another variable.\n"
      << "   - It 'points' to the location in memory where data is stored.\n\n";

  cout << "2. Syntax:\n"
       << "   - Declare a pointer with the asterisk (*) symbol. For "
          "example: int* ptr;\n"
       << "   - The type of the pointer indicates the type of the "
          "variable it points to.\n\n";
  cout << "3. Initialization:\n"

       << "   - Pointers are typically initialized with the address of a "
          "variable, using the address-of operator (&).\n"
       << "   - Example: int var = 5; int* ptr = &var;\n\n";

  cout << "4. Dereferencing:\n"
       << "   - Dereferencing a pointer means accessing the value at the "
          "memory address stored in the pointer.\n"
       << "   - Use the dereference operator (*) to access this value. "
          "For example, *ptr gives the value of var.\n\n";

  cout << "5. Null Pointer:\n"
       << "   - A null pointer points to nothing and is often used to indicate "
          "that the pointer is not assigned to a valid memory address.\n"
       << "   - In C++, nullptr is used to represent a null pointer.\n\n";

  cout << "6. Pointer Arithmetic:\n"
       << "   - Pointers support arithmetic operations like addition and "
          "subtraction.\n"
       << "   - These operations consider the size of the data type the "
          "pointer points to.\n\n";

  cout << "7. Dynamic Memory Allocation:\n"
       << "   - Pointers are used with new and delete operators for "
          "allocating and deallocating memory dynamically.\n"
       << "   - This is crucial for managing memory in programs where the "
          "memory requirement is not known at compile time.\n\n";

  cout << "8. Caution:\n"
       << "   - Always ensure pointers are initialized before use.\n"
       << "   - Be cautious with pointer arithmetic and ensure it's "
          "within the bounds of the allocated memory.\n"
       << "   - Remember to deallocate dynamically allocated memory to "
          "prevent memory leaks.\n"
       << "   - Prefer smart pointers (std::unique_ptr, std::shared_ptr) "
          "over raw pointers in modern C++.\n\n";
  // regular integer
  cout << "\n----- Regular Integer -----" << endl;
  int num{10};
  cout << "\nValue of num is: " << num << endl;
  cout << "sizeof num is: " << sizeof(num) << " bytes" << endl;
  cout << "Address of num is: " << &num << endl;

  // declaring a pointer

  cout << "\n----- Pointer Example -----" << endl;
  int *p;
  cout << "\nValue of p is: " << p << endl; // garbage (uninitialized)
  p = nullptr; // should initialize like this int " *p{nullptr} ".
  cout << "After assigning p = nullptr, the value of p is: " << p << endl;
  cout << "sizeof p is: " << sizeof(p) << " bytes" << endl;
  cout << "Address of p is: " << &p << endl;

  // pointer types
  cout << "\n----- Pointer Types -----" << endl;
  int *p1{nullptr};
  double *p2{nullptr};
  unsigned long long *p3{nullptr};
  vector<string> *p4{nullptr};
  string *p5{nullptr};

  cout << "\nsizeof p1 is: " << sizeof p1 << " bytes"
       << endl; // 8 bytes on my machine
  cout << "sizeof p2 is: " << sizeof p2 << " bytes"
       << endl; // 8 bytes on my machine
  cout << "sizeof p3 is: " << sizeof p3 << " bytes"
       << endl; // 8 bytes on my machine
  cout << "sizeof p4 is: " << sizeof p4 << " bytes"
       << endl; // 8 bytes on my machine
  cout << "sizeof p5 is: " << sizeof p5 << " bytes"
       << endl; // 8 bytes on my machine

  // dereferencing pointers
  cout << "\n----- Dereferencing Pointers -----" << endl;
  vector<string> stooges{"Larry", "Moe", "Curly"};
  vector<string> *vector_ptr{&stooges};

  cout << "\nFirst stooge: " << (*vector_ptr).at(0) << endl; // Larry

  cout << "Stooges: ";
  for (auto stooge : *vector_ptr) {
    cout << stooge << " ";
  }
  cout << endl;

  // dynamic memory allocation
  cout << "\n----- Dynamic Memory Allocation -----" << endl;
  int *int_ptr{nullptr};
  int_ptr = new int; // initialize on the heap
  cout << int_ptr << endl;
  delete int_ptr; // frees up storage

  size_t size{0};
  double *temp_ptr{nullptr};

  cout << "How many temperatures do you need? \n";

  temp_ptr = new double[size]; // allocates that many spaces in memory
  cout << temp_ptr << endl;
  delete[] temp_ptr;

  // Arrays and pointers
  cout << "\n----- Array/ Pointer Relationship -----" << endl;
  int scores[]{100, 95, 89};

  cout << "\nValue of scores: " << scores << endl;

  int *score_ptr{scores};
  cout << "Value of score_ptr: " << score_ptr << endl;

  cout << "\n--- Array Subscript Notation -----" << endl;
  cout << scores[0] << endl;
  cout << scores[1] << endl;
  cout << scores[2] << endl;

  cout << "\n--- Pointer Subscript Notation -----" << endl;
  cout << score_ptr[0] << endl;
  cout << score_ptr[1] << endl;
  cout << score_ptr[2] << endl;

  cout << "\n--- Pointer Offset Notation -----" << endl;
  cout << *score_ptr << endl;
  cout << (*score_ptr + 1) << endl;
  cout << (*score_ptr + 2) << endl;

  cout << "\n--- Array Offset Notation -----" << endl;
  cout << *scores << endl;
  cout << (*scores + 1) << endl;
  cout << (*scores + 2) << endl;
  cout << endl;

  cout << "\n----- Pointer Arithmetic -----" << endl;
  int scoreList[]{100, 95, 89, 68, -1};
  int *scoreList_ptr{scoreList};

  while (*scoreList_ptr != 89) { // loops through the array until -1 is seen
    cout << *scoreList_ptr << " ";
    scoreList_ptr++;
  }

  return 0;
}