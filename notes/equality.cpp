/**
#include <iomanip>
#include <iostream>


int main() {
    int a = 5;
    int b = 10;

    // Testing for equality using the == operator
    bool isEqual = (a == b);
    std::cout << "a == b: " << std::boolalpha << isEqual << std::endl;

    // Testing for inequality using the != operator
    bool isNotEqual = (a != b);
    std::cout << "a != b: " << std::boolalpha << isNotEqual << std::endl;

    // Resetting the output format to default
    std::cout << std::noboolalpha;

    return 0;
}
 * @brief This code demonstrates how to test for equality using the == and !=
operators.
 *        It also shows how to use boolalpha and noboolalpha to control the
output format of boolean values.
 */
