#include <iostream>
using namespace std;

// compound assignment operators provide a shorthand way to apply an operation
// to a variable then assign that back to the variable.
int main()
{
    // Addition:
    int a = 5;
    a += 3; // Equivalent to a = a + 3; Now, a is 8

    // Subtraction:
    int b = 10;
    b -= 4; // Equivalent to b = b - 4; Now, b is 6

    // Multiplication:
    int c = 7;
    c *= 3; // Equivalent to c = c * 3; Now, c is 21

    // Division:
    int d = 20;
    d /= 4; // Equivalent to d = d / 4; Now, d is 5

    // Modulus:
    int e = 26;
    e %= 5; // Equivalent to e = e % 5; Now, e is 1

    // Bitwise AND:
    int f = 12; // Binary 1100
    f &= 7;     // Binary 0111
                // Result is Binary 0100, which is 4

    // Bitwise OR:
    int g = 4; // Binary 0100
    g |= 3;    // Binary 0011
               // Result is Binary 0111, which is 7

    // Bitwise XOR - returns 1 if the bits are different, and 0 if they are the same:
    int h = 5; // Binary 0101
    h ^= 3;    // Binary 0011
               // Result is Binary 0110, which is 6

    // Left Shift - shifts the bits of the first operand to the left by the number of positions specified by the second operand. Bits shifted off the end are discarded, and zeros are shifted in from the right:
    int i = 2;
    i <<= 3; // Equivalent to i = i << 3; Now, i is 16 (binary 0010 shifted left by 3 positions is 10000)

    // Right Shift - shifts the bits of the first operand to the right by the number of positions specified by the second operand. Bits shifted off the end are discarded. For unsigned types, zeros are shifted in from the left. For signed types, the behavior of right shifts on negative numbers is implementation-defined in C++:
    int j = 16;
    j >>= 3; // Equivalent to j = j >> 3; Now, j is 2 (binary 10000 shifted right by 3 positions is 0010)

    return 0;
}