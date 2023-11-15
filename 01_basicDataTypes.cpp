#include <iostream>
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
    std::string name = "Justin";
    std::string longerString = "this is a longer string";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old.\n";

    std::cout << "The size of a char is " << sizeof(grade) << ".\n";      // age is an char so size is 1
    std::cout << "The size of a boolean is " << sizeof(student) << ".\n"; // age is an boolean so size is 1
    std::cout << "The size of an int is " << sizeof(age) << ".\n";        // age is an int so size is 4
    std::cout << "The size of a double is " << sizeof(price) << ".\n";    // age is an double so size is 8
    std::cout << "The size of a string is " << sizeof(name) << ".\n";     // age is an string so size is 32
    return 0;
}
