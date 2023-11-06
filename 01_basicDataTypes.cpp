#include <iostream>
//! Basic data types in C++.
int main()
{
    //* Integers (whole number) - decimals will be truncated
    int age = 26;
    int year = 2023;
    int days = 7;

    //* Doubles (number includes a decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temp = 74.2;

    //* Single Char - will only store last char if more than 1 char is present
    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    //* Booleans (true or false)
    bool student = true;
    bool power = false;

    //* String (sequence of text)
    std::string name = "Justin";
    std::string day = "Friday";
    std::string food = "Tacos";
    std::string address = "123 Oso Ave.";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old.\n";

    return 0;
}
