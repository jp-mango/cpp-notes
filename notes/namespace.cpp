#include <iostream>

using namespace std;

// Namespace
namespace first {
string x = "this is the first namespace\n";
}
namespace second {
string x = "this is the second namespace\n";

}

int main() {
  // Namespace provides a solution for preventing name conflicts in
  // large projects. Each entity needs a unique name. A namespace
  // allows for identically named entities as long as namespace is
  // different.
  using namespace second; // if scope not specified it will default to the
                          // second

  cout << first::x; // the value of x in the first namespace

  cout << second::x; // the value of x in the second namespace

  cout << x; // will default to second

  cout << "'using namespace std allows short-hand print statements\n";
  return 0;
}
