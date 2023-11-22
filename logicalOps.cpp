#include <iostream>
using namespace std;

// exercise on logical operators
int main()
{
    const int lower{10};
    const int upper{20};
    cout << boolalpha; // makes the output (true/false) instead of (1/0)
    // Check within bounds
    cout << "-- Within Bounds --" << endl;
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    int num{};
    cin >> num;
    bool within_bounds{false};
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    cout << endl;

    // Check out of bounds
    cout << "-- Out Of Bounds --" << endl;
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    int num2{};
    cin >> num2;
    bool outside_bounds{false};
    outside_bounds = (num2 < lower || num2 > upper);
    cout << num2 << " is less than " << lower << " or greater than " << upper << ": " << outside_bounds << endl;
    cout << endl;

    // On the boundary
    cout << "-- On The Boundary --" << endl;
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    int num3{};
    cin >> num3;
    bool on_bounds{false};
    on_bounds = (num3 == lower || num3 == upper);
    cout << num3 << " is on the boundary of " << lower << " and " << upper << ": " << on_bounds << endl;
    cout << endl;

    // Practical Example:
    // Determine if you need a raincoat based on temperature and wind speed
    bool wear_coat{false};
    const int wind_speed_for_coat{25}; // wind over this value require a coat
    const double temp_for_coat{45};    // temps below this require a coat

    cout << "Enter the current temperature in Fahrenheit (F): ";
    double temp{};
    cin >> temp;

    cout << "Enter wind speed in miles per hour (mp/h): ";
    int wind_speed{};
    cin >> wind_speed;

    // Require a coat if wind is too high OR temp is too low
    wear_coat = (temp < temp_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    // Require a coat if wind is too high AND temp is too low
    wear_coat = (temp < temp_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

    return 0;
}