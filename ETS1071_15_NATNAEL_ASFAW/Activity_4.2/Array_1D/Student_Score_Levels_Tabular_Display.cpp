#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getScoreLevel(int marks) {
    if (marks >= 80) {
        return "Excellent";
    } else if (marks >= 60) {
        return "Very Good";
    } else if (marks >= 50) {
        return "Fair";
    } else if (marks >= 40) {
        return "Poor";
    } else {
        return "Fail";
    }
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<string> names(numStudents);
    vector<int> marks(numStudents);

    // Input student names and marks
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter the total marks of " << names[i] << ": ";
        cin >> marks[i];
    }

    // Display the score levels in tabular format
    cout << "\nScore Level Table" << endl;
    cout << "-----------------" << endl;
    cout << "Name\t|\tMarks\t|\tScore Level" << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << names[i] << "\t|\t" << marks[i] << "\t|\t" << getScoreLevel(marks[i]) << endl;
    }

    return 0;
}
