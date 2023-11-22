#include <iostream>
using namespace std;

int main()
{
    int totalCents{};
    cout << "Enter the total number of cents: ";
    cin >> totalCents;

    int dollars = totalCents / 100;
    int remainingCents = totalCents % 100;

    int quarters = remainingCents / 25;
    remainingCents %= 25;

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    int nickels = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << "Change can be given as: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    return 0;
}