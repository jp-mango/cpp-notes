#include <iostream>
using namespace std;

int main()
{
    int smallRooms{0};
    cout << "How many small rooms would you like to clean? " << endl;
    cin >> smallRooms;

    int largeRooms{0};
    cout << "How many large rooms do you want to clean? " << endl;
    cin >> largeRooms;

    cout << "--Estimate for cleaning service--" << endl;
    cout << "Number of small rooms: " << smallRooms << endl;
    cout << "Number of large rooms: " << largeRooms << endl;
    cout << "Price per small room: $25" << endl;
    cout << "Price per large room: $35" << endl;

    int cost{0};
    cost = (smallRooms * 25) + (largeRooms * 35);
    cout << "Cost: $" << cost << endl;

    double tax{0};
    tax = (cost * .06);
    cout << "Tax: $" << tax << endl;

    double total{0};
    total = cost + tax;
    cout << "Total: $" << total;

    return 0;
}
