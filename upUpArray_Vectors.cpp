#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "YOU CAN ONLY PRINT THE ENTIRE ARRAY IF YOU ITERATE OVER IT" << endl;
    cout << "Examples:" << endl;
    cout << endl;

    int test_scores[5]{100, 95, 99, 87, 88};
    cout << "-- Test Scores: --" << endl;
    cout << "Test scores: " << test_scores << endl;
    cout << "First test score at index 0: " << test_scores[0] << endl;
    cout << "Second test score at index 1: " << test_scores[1] << endl;
    cout << "Third test score at index 2: " << test_scores[2] << endl;
    cout << "First test score at index 3: " << test_scores[3] << endl;
    cout << "First test score at index 4: " << test_scores[4] << endl;
    cout << endl;

    int high_score_per_level[10]{3, 5}; // init to 3,5 and remaining o 0
    cout << "-- High Scores: --" << endl;
    cout << "High scores: " << high_score_per_level << endl;
    cout << "First high score at index 0: " << high_score_per_level[0] << endl;
    cout << "Second high score at index 1: " << high_score_per_level[1] << endl;
    cout << "Third high score at index 2: " << high_score_per_level[2] << endl;
    cout << "First high score at index 3: " << high_score_per_level[3] << endl;
    cout << "First high score at index 4: " << high_score_per_level[4] << endl;
    cout << "remaining are 0" << endl;
    cout << endl;

    const int days_in_year{365};
    double hi_temperatures[days_in_year]{0}; // init all to zero
    cout << hi_temperatures << endl;

    int another_array[]{1, 2, 3, 4, 5}; // size automatically calculated
    cout << another_array << endl;
    cout << endl;

    //---------------------------------------------------------------------------------------------------------

    // Reassigning array content
    // last element in an array is (array size - 1)
    cout << "-- Arrays --" << endl;
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl; // anything larger than 4 will result in an out of bounds error.

    double hi_temps[]{96.1, 89.8, 77.5, 81.6};
    cout << "The first high temp is: " << hi_temps[0] << endl;
    hi_temps[0] = 120.7; // sets the first element in the hi_temps array to 120.7
    cout << "Now the first high temp is: " << hi_temps[0] << endl;
    cout << endl;

    //---------------------------------------------------------------------------------------------------------

    // Multi-dimensional arrays
    cout << "-- Multi-dimensional arrays --" << endl;
    int movie_rating[3][4]{};
    cout << "First movie rating: " << movie_rating[0][0] << endl;
    cout << "Last movie rating: " << movie_rating[2][3] << endl;
    cout << endl;

    //---------------------------------------------------------------------------------------------------------

    // Vectors
    cout << "-- Vectors --" << endl;
    vector<int> tests(10); // automatically initializes values to 0
    vector<char> vowels_vector{'a', 'e', 'i', 'o', 'u'};
    vector<double> temps_vector(30, 80.5); // will create a vector of length = 30, with each value as 80.5
    cout << "First vector temp: " << temps_vector[0] << endl;
    cout << "Last vector temp: " << temps_vector[29] << endl; // using a subscript operator,[], w/ a vector will not out of bounds check
    vector<double> double_vector = {2.5, 5.7, 8.2, 3.0, 9.9};
    cout << "Last vector value: " << double_vector.at(double_vector.size() - 1) << endl; // .size() returns the length of a vector, subtract 1 to avoid out of bounds
    double_vector.push_back(12.7);                                                       // adds 12.7 to the end of the the vector
    cout << "Now the last vector value is: " << double_vector.at(double_vector.size() - 1) << endl;
    //---------------------------------------------------------------------------------------------------------
    return 0;
}