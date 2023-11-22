#include <iostream>
using namespace std;

int main()
{
    const int min{30};
    const int max{80};
    cout << "Enter a number between " << min << " and " << max << endl;
    int num{};
    cin >> num;

    if (num < min)
    {
        cout << "----- Conditional Statement 1 -----" << endl;
        int diff{min - num};
        cout << num << " is " << diff << " less than the minimum number " << min << endl;
    }
    else if (num == min)
    {
        cout << "----- Conditional Statement 2 -----" << endl;
        cout << num << " is equal to " << min << endl;
    }
    else if (num > min && num < max)
    {
        cout << "----- Conditional Statement 3 -----" << endl;
        cout << num << " falls between the minimum number " << min << " and the maximum number " << max << endl;
    }
    else if (num == max)
    {
        cout << "----- Conditional Statement 4 -----" << endl;
        cout << num << " is equal to the maximum number " << max << endl;
    }
    else if (num > max)
    {
        cout << "----- Conditional Statement 5 -----" << endl;
        int diff{num - max};
        cout << num << " is " << diff << " greater than the maximum number " << max << endl;
    }

    cout << endl;
    return 0;
}