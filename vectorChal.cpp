#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "First number in vector 1: " << vector1.at(0) << endl;
    cout << "Second number in vector 1: " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "First number in vector 2: " << vector2.at(0) << endl;
    cout << "Second number in vector 2: " << vector2.at(1) << endl;

    vector1.at(0) = 1000;

    vector<vector<int>> vector_2d; // Empty 2D vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "First number in 2d vector: " << vector_2d.at(0).at(0) << endl;
    cout << "Second number in 2d vector: " << vector_2d.at(0).at(1) << endl;
    cout << "Third number in 2d vector: " << vector_2d.at(1).at(0) << endl;
    cout << "Fourth number in 2d vector: " << vector_2d.at(1).at(1) << endl;

    return 0;
}