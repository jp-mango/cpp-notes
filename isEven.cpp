#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number";
    int num{};
    cin >> num;

    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd");
}