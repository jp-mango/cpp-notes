#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // encryption or decryption
  cout << "Would you like to [e]ncrypt or [d]ecrypt? " << endl;
  string choice{};
  getline(cin, choice);

  // shift value
  cout << "What is the shift value? " << endl;
  string shiftStr{};
  getline(cin, shiftStr);
  int shift = stoi(shiftStr);

  // phrase
  cout << "Enter the phrase that you want to "
       << ((choice == "e") ? "encrypt" : "decrypt") << ": \n";
  string phrase{};
  getline(cin, phrase);

  // encrypt/ decrypt loop
  for (size_t i = 0; i < phrase.size(); i++) {
    if (isalpha(phrase[i])) {
      char base = islower(phrase[i]) ? 'a' : 'A';
      int offset = phrase[i] - base;
      if (choice == "e") {
        phrase[i] = base + (offset + shift + 26) % 26;
      } else {
        phrase[i] = base + (offset - shift + 26) % 26;
      }
    }
  }
  cout << "Result: " << phrase;
  return 0;
}