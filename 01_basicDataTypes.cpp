#include <iostream>
using namespace std;
//! Basic data types in C++.
int main()
{
    //* Integers (whole number) - decimals will be truncated
    int age = 26;

    //* Doubles (number includes a decimal)
    double price = 10.99;

    //* Single Char - will only store last char if more than 1 char is present
    char grade = 'A';

    //* Booleans (true or false)
    bool student = true;

    //* String (sequence of text)
    string name{"Justin"};
    string longerString{"this is a longer string"};
    cout << "Hello " << name << "\n";
    cout << "You are " << age << " years old.\n";
    cout << "The size of a char is " << sizeof(grade) << ".\n";      // age is an char so size is 1
    cout << "The size of a boolean is " << sizeof(student) << ".\n"; // age is an boolean so size is 1
    cout << "The size of an int is " << sizeof(age) << ".\n";        // age is an int so size is 4
    cout << "The size of a double is " << sizeof(price) << ".\n";    // age is an double so size is 8
    cout << "The size of a string is " << sizeof(name) << ".\n";     // age is an string so size is 32
    return 0;
}
