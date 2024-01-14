#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int scores[5];

    cout << "Please enter the total score of the five students followed by a space: ";
    for (int i = 0; i < 5; i++) {
        cin >> scores[i];
    }

    cout << setw(15) << "Student" << setw(15) << "Score" << setw(15) << "Score Level" << endl;

    for (int i = 0; i < 5; i++) {
        cout << setw(15) << "Student " << i + 1 << setw(15) << scores[i];

        if (scores[i] >= 80) {
            cout << setw(15) << "Excellent";
        } else if (scores[i] >= 60) {
            cout << setw(15) << "Very Good";
        } else if (scores[i] >= 50) {
            cout << setw(15) << "Fair";
        } else if (scores[i] >= 40) {
            cout << setw(15) << "Poor";
        } else {
            cout << setw(15) << "Fail";
        }

        cout << endl;
    }

    return 0;
}
