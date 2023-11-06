#include <iostream>
//! Arithmetic Operations
int main()
{
    // return the result of a specific operation ('+', '-', '*', '/')

    int students = 20; // any decimal will be truncated

    //* Addition
    students += 2; // 22
    students++;    // 23

    //* Subtraction
    students -= 3; // 20
    students--;    // 19

    //* Multiplication
    students *= 2; // 38

    //* Division
    students /= 2; // 19

    //* Remainder
    int rem = students % 2; // if remainder 1, number is odd. 0 = even.

    std::cout << "Students: " << students << "\n";
    std::cout << "Remainder: " << rem << "\n";

    return 0;
}
