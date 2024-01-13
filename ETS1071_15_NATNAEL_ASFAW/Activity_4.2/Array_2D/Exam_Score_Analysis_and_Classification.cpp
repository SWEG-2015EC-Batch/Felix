#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

 string getScoreLevel(int totalMark) {
    if (totalMark >= 80) {
        return "Excellent";
    } else if (totalMark >= 60) {
        return "Very Good";
    } else if (totalMark >= 50) {
        return "Fair";
    } else if (totalMark >= 40) {
        return "Poor";
    } else {
        return "Fail";
    }
}

int main() {

    int testScore, assignmentScore, quizScore, projectScore, finalScore;
    cout << "Enter test score: ";
    cin >> testScore;
    cout << "Enter assignment score: ";
    cin >> assignmentScore;
    cout << "Enter quiz score: ";
    cin >> quizScore;
    cout << "Enter project score: ";
    cin >> projectScore;
    cout << "Enter final score: ";
    cin >> finalScore;


    int totalMark = testScore + assignmentScore + quizScore + projectScore + finalScore;


    string scoreLevel = getScoreLevel(totalMark);


    cout << left << setw(15) << "Total Mark:" << totalMark << endl;
    cout << setw(15) << "Score Level:" << scoreLevel << endl;

    return 0;
}
