#include <cctype>  // for character based functions
#include <cstring> // functions that work w/ C stryle strings (string must be terminated w/ null char)
#include <iostream>
#include <string> // for C++ string functions

using namespace std;

int main() {
  char letter{'a'};
  char upperChar{'A'};
  char numChar{'9'};
  char punctChar{'?'};
  char spaceChar{' '};
  char newlineChar{'\n'};
  // Boolean Tests
  // isalpha: 0 = not a letter, 1 = uppercase letter, 2 = lowercase letter
  cout << " ----- isalpha() ----- " << endl;
  cout << "isalpha(" << letter << ") returns: " << isalpha(letter) << endl;
  cout << endl;

  // isalnum: 0 = not a letter, 1 = uppercase letter, 2 = lowercase letter
  cout << " ----- isalnum() ----- " << endl;
  cout << "isalnum(" << letter << ") returns: " << isalnum(letter) << endl;
  cout << endl;

  // isdigit: 1 = char is '1' - '9', 0 otherwise
  cout << " ----- isdigit() ----- " << endl;
  cout << "isdigit(" << letter << ") returns: " << isdigit(letter) << endl;
  cout << "isdigit(" << numChar << ") returns: " << isdigit(numChar) << endl;
  cout << endl;

  // islower: 1 = lowercase char, 0 otherwise
  cout << " ----- islower() ----- " << endl;
  cout << "islower(" << letter << ") returns: " << islower(letter) << endl;
  cout << "islower(" << upperChar << ") returns: " << islower(upperChar)
       << endl;
  cout << "islower(" << numChar << ") returns: " << islower(numChar) << endl;
  cout << endl;

  // isprint(): Checks if a character is printable. This includes letters,
  // digits, punctuation, and whitespace (anything that produces a visible
  // output, as opposed to control characters).
  cout << " ----- isprint() ----- " << endl;
  cout << "isprint(" << letter << ") returns: " << isprint(letter) << endl;
  cout << "isprint(" << upperChar << ") returns: " << isprint(upperChar)
       << endl;
  cout << "isprint(\'\\n\') returns: " << isprint(newlineChar) << endl;
  cout << endl;

  // ispunct(): returns non zero answer if char is punctuation
  cout << " ----- ispunct() ----- " << endl;
  cout << "ispunct(" << letter << ") returns: " << ispunct(letter) << endl;
  cout << "ispunct(" << upperChar << ") returns: " << ispunct(upperChar)
       << endl;
  cout << "ispunct(" << punctChar << ") returns: " << ispunct(punctChar)
       << endl;
  cout << endl;

  // isupper(): returns non zero answer if char is uppercase
  cout << " ----- isupper() ----- " << endl;
  cout << "isupper(" << letter << ") returns: " << isupper(letter) << endl;
  cout << "isupper(" << upperChar << ") returns: " << isupper(upperChar)
       << endl;
  cout << "isupper(" << punctChar << ") returns: " << isupper(punctChar)
       << endl;
  cout << endl;

  // isspace(): returns non zero answer if char is whitespace
  cout << " ----- isspace() ----- " << endl;
  cout << "isspace(" << letter << ") returns: " << isspace(letter) << endl;
  cout << "isspace(" << upperChar << ") returns: " << isspace(upperChar)
       << endl;
  cout << "isspace(" << spaceChar << ") returns: " << isspace(spaceChar)
       << endl;

  // Strings - constant and terminated w/ null char
  cout << "\n ----- C Strings: -----" << endl;

  cout << "Enter your first name: " << endl;
  char firstName[20]{};
  cin.getline(firstName, 20);

  cout << "Enter you last name: " << endl;
  char lastName[20]{};
  cin.getline(lastName, 20);

  cout << "Hello, " << firstName << ".\nYour first name has "
       << strlen(firstName) << " characters, ";

  cout << "and your last name (" << lastName << ") has " << strlen(lastName)
       << " characters." << endl;

  char fullName[50]{};
  strcpy_s(fullName, firstName); // copy first name to full name
  strcat_s(fullName, " ");       // adds a space to the end of full name
  strcat_s(fullName, lastName);  // adds last name to full name
  cout << "Your full name is " << fullName << endl;

  char temp[50]{};
  strcpy_s(temp, fullName);
  cout << temp << " and " << fullName << " are "
       << ((strcmp(temp, fullName) == 0) ? "the same" : "different")
       << endl; // compares strings

  cout << "\n----- C++ String -----" << endl;
  // dynamically sized, safer, provide bounds checking compared to C strings
  string s1;               // Empty string
  string s2{"Justin"};     // Justin
  string s3{s2};           // Justin
  string s4{"Menzies", 3}; // Men
  string s5{s3, 0, 2};     // Ju
  string s6(3, 'X');       // XXX

  // can use vector access methods
  s2[0] = 'j';    // changes the 'J' in 'justin' to a 'j'
  s2.at(0) = 'B'; // changes the j in justin to Bustin

  // vector methods for displaying as well
  for (auto c : s2) {
    cout << c << endl;
  }

  // comparing strings
  string fruit1{"Apple"};
  string fruit2{"Banana"};
  string fruit3{"Kiwi"};
  string fruit4{fruit1}; // Apple

  bool isEqual1 = fruit1 == fruit2; // False
  cout << fruit1 << " == " << fruit2 << " : " << isEqual1 << endl;
  bool isEqual2 = fruit1 != fruit4; // False
  cout << fruit1 << " != " << fruit4 << " : " << isEqual2 << endl;
  bool isEqual3 =
      fruit2 < fruit3; // True - compares ASCII value of first letter
  cout << fruit2 << " < " << fruit3 << " : " << isEqual3 << endl;

  // substrings
  string sentence1{"This is a test"};
  cout << sentence1.substr(0, 4) << " ";   // This
  cout << sentence1.substr(5, 2) << " ";   // is
  cout << sentence1.substr(10, 4) << endl; // test
  cout << endl;

  // finding strings. find() and rfind()
  cout << sentence1.find("This") << endl;  // 0
  cout << sentence1.find("is") << endl;    // 2
  cout << sentence1.find("test") << endl;  // 10
  cout << sentence1.find('e') << endl;     // 11
  cout << sentence1.find("is", 4) << endl; // 5 , starts at the 4th index
  cout << sentence1.find("XX")
       << endl; // string::npos , can check for value in if statement
  cout << endl;
  // removing characters. erase() adn clear()
  cout << sentence1.erase(0, 5) << endl; // erases everything except "is a test"
  cout << sentence1.erase(5, 4) << endl; // is a
  sentence1.clear();                     // empties sentence 1

  // other useful methods: length() - returns length, getline() - default to the
  // newline character, but you can specify delimiter w/ 3rd input
  cout << "Enter 2 sentences, separated with a period: ";
  string phrase{};
  getline(cin, phrase, '.'); // Will output first sentence

  //.insert() - is used to insert into strings at a specific index
  string noSpaceName{"JustinMenzies"};
  string spaceName = noSpaceName.insert(6, " "); // Justin Menzies
  return 0;
}