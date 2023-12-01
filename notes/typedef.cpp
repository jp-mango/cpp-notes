#include <iostream>
#include <vector>

using namespace std;

typedef string text_t;  // end variables with '_t' to specify alias
using words_t = string; // can use using as replacement
int main() {
  // typedef is a reserved keyword used to create an additional name
  // (alias) for another data type. New identifier for an existing type
  // Helps w/ readability and reduces typos. Replaced w/ 'using' keyword

  text_t firstName = "Justin\n";
  words_t idk = "idk";
  cout << firstName;
  cout << idk;
  return 0;
}
