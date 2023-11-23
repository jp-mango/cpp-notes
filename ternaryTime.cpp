#include <iostream>
using namespace std;

int main()
{
    // checks if the number is even and returns even or odd.
    cout << "Enter a number to find out if it is even or odd: " << endl;
    int evenOddNum{};
    cin >> evenOddNum;
    cout << evenOddNum << " is " << ((evenOddNum % 2 == 0) ? "even" : "odd") << endl;
    cout << endl;

    // finds the largest of 2 numbers.
    cout << "Enter two numbers separated by a space, and I will tell you which is larger: " << endl;
    int largestNum1{};
    int largestNum2{};
    cin >> largestNum1 >> largestNum2;
    cout << largestNum1 << " is " << ((largestNum1 > largestNum2) ? "larger " : "smaller ") << "than " << largestNum2 << endl;
}