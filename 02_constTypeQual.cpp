#include <iostream>
using namespace std;
//! Const
int main()
{
    // The const keyword specifies that a variables value
    // will not change, making if effectively read-only.

    // Ex.
    const double PI{3.14159};
    double radius{10};
    double circumference = 2 * PI * radius;

    cout << circumference << "ft";
    return 0;
}