#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  bool isFinished{false};
  char choice{};
  vector<int> mainList{};

  while (!isFinished) {
    // Terminal menu:
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter a choice: " << endl;
    cin >> choice;

    if (choice == 'Q' || choice == 'q') {
      cout << "Have a good day!" << endl;
      break;

    } else if (choice == 'P' || choice == 'p') {
      // prints numbers
      cout << "\nNumbers: [";
      for (long long unsigned int i{0}; i != mainList.size(); i++) {
        cout << mainList[i] << (i == mainList.size() - 1 ? "" : ", ");
      }
      cout << "]" << endl;
    } else if (choice == 'A' || choice == 'a') {
      // adds a number to a list
      cout << "\nWhat number to you want to add? " << endl;
      int newNum{};
      cin >> newNum;
      mainList.push_back(newNum);
      cout << newNum << " was added to the list." << endl;

    } else if (choice == 'M' || choice == 'm') {
      // displays the mean
      double sum{};
      for (auto nums : mainList) {
        sum += nums;
      }
      double average = sum / mainList.size();
      cout << "Average: " << average << endl;

    } else if (choice == 'S' || choice == 's') {
      // displays the smallest number
      auto smallNum = *min_element(mainList.begin(), mainList.end());
      cout << "Smallest number: " << smallNum << endl;
    } else if (choice == 'L' || choice == 'l') {
      // displays the largest number
      auto largeNum = *max_element(mainList.begin(), mainList.end());
      cout << "Largest number: " << largeNum << endl;
    } else {
      cout << "\nEnter a valid choice." << endl;
    }
  }
  return 0;
}