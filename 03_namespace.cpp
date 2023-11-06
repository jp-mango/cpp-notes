#include <iostream>
//! Namespace
namespace first
{
    std::string x = "this is the first namespace\n";
}
namespace second
{
    std::string x = "this is the second namespace\n";

}

int main()
{
    // Namespace provides a solution for preventing name conflicts in
    // large projects. Each entity needs a unique name. A namespace
    // allows for identically named entities as long as namespace is
    // different.
    using namespace second; // if scope not specified it will default to the second

    std::cout << first::x; // the value of x in the first namespace

    std::cout << second::x; // the value of x in the second namespace

    std::cout << x; // will default to second

    using std::cout;   // allows shorthand
    using std::string; // allows shorthand

    cout << "'using std::cout' allows short-hand print statements\n";
    string shortHand = "'using std::string' allows for shorthand string statements\n";
    cout << shortHand;
    return 0;
}
