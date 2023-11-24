#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // For Loops - iterates a specific number of times
    cout << "-- For Loops -- " << endl;
    // Looping w/ multiple variables
    cout << "\n - Example 1: for loop w/ multiple variables -" << endl;
    cout << "for (int i{1}, j{5}; i <= 5; i++, j++);" << endl;
    cout << "    cout << i << \" + \" << j << \" = \" << (i + j) << endl;" << endl;
    cout << "\n - Output 1:" << endl;
    for (int a{1}, b{5}; a <= 5; a++, b++)
    {
        cout << a << " + " << b << " = " << (a + b) << endl;
    }
    cout << endl;
    // Ternary within loop
    cout << "\n - Example 2: Ternary within for loop -" << endl;
    cout << "for (int c{1}; c <= 100; c++)" << endl;
    cout << "{" << endl;
    cout << "    cout << c << ((c % 10 == 0) ? \"\\n\" : \" \");" << endl;
    cout << "}" << endl;
    cout << "\n - Output 2:" << endl;
    for (int c{1}; c <= 100; c++)
    {                                              // prints value of c, 1
        cout << c << ((c % 10 == 0) ? "\n" : " "); // print a newline every 10 iterations
    }
    cout << endl;
    // Iterating Through Vectors
    cout << "\n - Example 3: for loop w/ vectors -" << endl;
    cout << "vector<int> nums{10, 20, 30, 40, 50};" << endl;
    cout << "for (unsigned d{0}; d < nums.size(); d++)" << endl;
    cout << "{" << endl;
    cout << "    cout << nums[d] << \" \";" << endl;
    cout << "}" << endl;
    cout << "\n - Output 3:" << endl;
    vector<int> nums{10, 20, 30, 40, 50};
    for (unsigned d{0}; d < nums.size(); d++)
    {
        cout << nums[d] << " ";
    }
    // Ranged-based For Loops - one iteration for each element in a range or collection

    // While Loops - iterates while a condition remains true, check condition at the BEGINNING the next iteration

    // Do-While Loop - iterates while the condition remains true, checks condition at the END of every iteration
}