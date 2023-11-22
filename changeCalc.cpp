#include <iostream>
using namespace std;

int main()
{
    int totalCents{};
    cout << "Enter the total number of cents: ";
    cin >> totalCents;

    // (1 dollar is 100 cents, so dividing the total cents by 100 gives the number of dollars)
    int dollars = totalCents / 100;
    // Calculate remaining cents after converting some of them into dollars
    int remainingCents = totalCents % 100;

    // (1 quarter is 25 cents, so dividing the total cents by 25 gives the number of quarters)
    int quarters = remainingCents / 25;
    // Calculate remaining cents after converting some of them into quarters
    remainingCents %= 25;

    // (1 dime is 10 cents, so dividing the total cents by 10 gives the number of dimes)
    int dimes = remainingCents / 10;
    // Calculate remaining cents after converting some of them into dimes
    remainingCents %= 10;

    // (1 nickel is 5 cents, so dividing the total cents by 5 gives the number of nickels)
    int nickels = remainingCents / 5;
    // Calculate remaining cents after converting some of them into nickels
    remainingCents %= 5;

    // Remaining cents are now all pennies
    int pennies = remainingCents;

    cout << "Change can be given as: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    cin.get(); // waits for user input
    return 0;
}