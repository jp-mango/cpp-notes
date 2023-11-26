/**
 * @brief The three-way comparison operator (<=>) in C++.
 *
 * The three-way comparison operator (<=>) was introduced in C++20 and is used
to compare two objects
 * and produce a result that indicates their relative ordering. It returns one
of three values:
 *
 * - A negative value if the left operand is less than the right operand.
 * - Zero if the left operand is equal to the right operand.
 * - A positive value if the left operand is greater than the right operand.
 *
 * The three-way comparison operator can be used with built-in types,
user-defined types, and standard library types.
 * It provides a concise and consistent way to perform comparisons, especially
when used in conjunction with
 * the spaceship operator (<=) and the spaceship operator (>=).
 *
 * Example usage:
 * #include <iostream>
#include <compare>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    auto result = a <=> b;
    if (result < 0)
    {
        cout << "a is less than b" << endl;
    }
    else if (result == 0)
    {
        cout << "a is equal to b" << endl;
    }
    else
    {
        cout << "a is greater than b" << endl;
    }
    return 0;
}
 **/