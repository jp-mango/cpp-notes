#include <iostream>
using namespace std;

int main()
{
    const int min{30};
    const int max{80};
    int num{45};

    if (num < min)
    {
        cout << "----- If Statement 1 -----" << endl;
        int diff{min - num};
        cout << num << " is " << diff << " less than the minimum number " << min << endl;
    }
    else if (num == min)
    {
        cout << "----- Else-If Statement 2 -----" << endl;
        cout << num << " is equal to " << min << endl;
    }
    else if (num > min && num < max)
    {
        cout << "----- Else-If Statement 3 -----" << endl;
        cout << num << " falls between the minimum number " << min << " and the maximum number " << max << endl;
    }
    else if (num == max)
    {
        cout << "----- Else-If Statement 4 -----" << endl;
        cout << num << " is equal to the maximum number " << max << endl;
    }
    else if (num > max)
    {
        cout << "----- Else-If Statement 5 -----" << endl;
        int diff{num - max};
        cout << num << " is " << diff << " greater than the maximum number " << max << endl;
    }
    cout << endl;

    cout << "----- Nested If Statement -----" << endl;
    int grade{96};
    cout << "Grade: " << grade << endl;
    if (grade > 90)
    {
        if (grade > 95)
            cout << "Letter Grade: A+" << endl;
        else
            cout << "Letter Grade A" << endl;
    }
    cout << endl;

    // best used when dealing with a variable that can take one of several discrete values and
    // you need to execute different code for each value.
    cout << "----- Switch-Case -----" << endl;
    enum Color
    {
        red,
        green,
        blue
    };
    Color screen_color{green};
    switch (screen_color)
    {
    case red:
        cout << "red";
        break;
    case green:
        cout << "green";
        break;
    case blue:
        cout << "blue";
        break;
    default:
        cout << "should never execute";
    }
    cout << endl;
    return 0;
}