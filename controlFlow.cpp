#include <iostream>
using namespace std;

int main()
{
    const int min{10};
    const int max{100};
    cout << "Enter a number between " << min << " and " << max << endl;
    int num{};
    cin >> num;

    cout << endl;
    return 0;
}