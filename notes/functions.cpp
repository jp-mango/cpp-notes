#include <iostream>
using namespace std;

// Function Prototypes
int add(int a, int b = 10);
int add(int a, int b, int c);
void printArray(int arr[], int size);
void increment(int &num);
int factorial(int n);
inline int max(int a, int b);

int main() {
  // Using the add function with default argument
  // Only one argument is provided, the second uses the default value
  cout << "Add with default argument: " << add(5) << endl;

  // Overloading: Using add function with 3 parameters
  // This calls the second version of the add function
  cout << "Overloaded add: " << add(5, 10, 15) << endl;

  // Passing an array to a function
  int arr[] = {1, 2, 3, 4, 5};
  cout << "Array elements: ";
  printArray(arr, 5);
  cout << endl;

  // Pass by Reference: The function can modify the original variable
  int num = 5;
  increment(num);
  cout << "After increment: " << num << endl;

  // Using an inline function for efficiency
  cout << "Max of 10 and 20: " << max(10, 20) << endl;

  // Recursive function: Function calls itself
  cout << "Factorial of 5: " << factorial(5) << endl;

  return 0;
}

// Function Definitions

// add function with default argument
// If the second argument is not provided, it defaults to 10
int add(int a, int b) { return a + b; }

// Overloaded add function with three parameters, this has the same name as the
// above function, but since i passed in 3 variables the compiler knows which
// function to pass it to Different number of parameters allows for function
// overloading
int add(int a, int b, int c) { return a + b + c; }

// Function to print elements of an array
// The array is passed as a pointer (int arr[]) and size is also passed because
// only the memory address of the array is passed, so the compiler doesn't know
// the size of the array. Therfore it has to be passed in as well.
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

// Pass-by-reference function. Allows the function to modify the variable
// directly. num is passed by reference, so the function can modify the original
// variable
void increment(int &num) { num++; }

// Recursive function for calculating factorial
// The function calls itself with a decremented value of n until it reaches 1
int factorial(int n) {
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

// Inline function for finding maximum of two numbers
// Inline suggests to the compiler to replace the function call with the
// function body
inline int max(int a, int b) { return (a > b) ? a : b; }
