// Haley Melson
// hmelson@my.athens.edu
// Assignment 2 P 1

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    vector<double> testScores;
    int numberOfTestScores;

    cout << "Enter the number of test scores: ";
    cin >> numberOfTestScores;

    for (int i = 0; i < numberOfTestScores; i++)
    {
        double scores;
        cout << "Enter test score number" << i + 1 << ": ";
        cin >> scores;
        testScores.push_back(scores);
    }
    double total = 0.0;
    for (double scores : testScores) 
    {
        total += scores;
    }
    double average = total / numberOfTestScores;
    cout << "The average of the test scores are: " << setw(2) << average << endl;
    
    cout << "The inidividual test scores in reverse order:" << endl;
    for (int i = numberOfTestScores - 1; i >= 0; i--)
    {
        cout << testScores[i] << endl;
    }
return 0;
}