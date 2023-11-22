#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num{};
    cin >> num;
    // checks if the number is even and returns even or odd
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd");
}