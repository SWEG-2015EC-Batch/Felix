//This program calculates a students grades in lettered grade system.
#include <iostream>
using namespace std;

int main() {
    cout << "                       Grade calculator" << endl;
    cout << "------------------------------------------------------------------" << endl;

    float test, quiz, project, assignment, final, total{0};

    do {
        cout << "Please enter your test results out of 15 for this subject: ";
        cin >> test;
        if (test > 15) {
            cout << "You entered an invalid input.\n";
        }
    } while (test > 15);

    do {
        cout << "Please enter your quiz results out of 5: ";
        cin >> quiz;
        if (quiz > 5) {
            cout << "You entered an invalid input.\n";
        }
    } while (quiz > 5);

    do {
        cout << "Please enter your project results out of 20: ";
        cin >> project;
        if (project > 20) {
            cout << "You entered an invalid input.\n";
        }
    } while (project > 20);

    do {
        cout << "Please enter your assignment result out of 10: ";
        cin >> assignment;
        if (assignment > 10) {
            cout << "You entered an invalid input.\n";
        }
    } while (assignment > 10);

    do {
        cout << "Please enter your final exam results out of 50: ";
        cin >> final;
        if (final > 50) {
            cout << "You entered an invalid input.\n";
        }
    } while (final > 50);

    total = test + quiz + project + assignment + final;

    if (total >= 90) {
        cout << "Your grade is: A+" << endl;
    } else if (total >= 80) {
        cout << "Your grade is: A" << endl;
    } else if (total >= 75) {
        cout << "Your grade is: B+" << endl;
    } else if (total >= 60) {
        cout << "Your grade is: B" << endl;
    } else if (total >= 55) {
        cout << "Your grade is: C+" << endl;
    } else if (total >= 45) {
        cout << "Your grade is: C" << endl;
    } else if (total >= 30) {
        cout << "Your grade is: D" << endl;
    } else {
        cout << "Your grade is: F" << endl;
    }

    cout << "Thank you for using the program." << endl;
    return 0;
}
