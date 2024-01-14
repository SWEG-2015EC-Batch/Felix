#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int marks[5][6];
    const int columnWidth = 15;

    for (int i = 0; i < 5; i++) {
        cout << "Enter test(20), assignment(15), quiz(5), project(10), and final(50) results respectively for student " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
        }
        marks[i][5] = marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4];
    }

    cout << setw(columnWidth) << "Student" << setw(columnWidth) << "Test" << setw(columnWidth) << "Assignment" << setw(columnWidth) << "Quiz" << setw(columnWidth) << "Project" << setw(columnWidth) << "Final" << setw(columnWidth) << "Total" << setw(columnWidth) << "Status" << endl;

    for (int i = 0; i < 5; i++) {
        cout << setw(columnWidth) << i + 1;
        for (int j = 0; j < 6; j++) {
            cout << setw(columnWidth) << marks[i][j];
        }
        if (marks[i][5] >= 80) {
            cout << setw(columnWidth) << "Excellent";
        } else if (marks[i][5] >= 60) {
            cout << setw(columnWidth) << "Very Good";
        } else if (marks[i][5] >= 50) {
            cout << setw(columnWidth) << "Fair";
        } else if (marks[i][5] >= 40) {
            cout << setw(columnWidth) << "Poor";
        } else {
            cout << setw(columnWidth) << "Fail";
        }
        cout << endl;

        // Line separator
        cout << setfill('-') << setw(8 * columnWidth) << "-" << setfill(' ') << endl;
    }

    return 0;
}
