#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int numQuestions = 10;
    char correctAnswers[numQuestions] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[numQuestions];

    // Accept student answers
    cout << "Enter your answers for the 10 questions (A, B, C, or D):\n";
    for (int i = 0; i < numQuestions; ++i) {
        cout << "Question " << (i + 1) << ": ";
        cin >> studentAnswers[i];
    }

    // Print the test score along with marked student answers
    int score = 0;
    cout << "\nTest Score and Marked Answers:\n";
    for (int i = 0; i < numQuestions; ++i) {
        cout << "Question " << (i + 1) << ": ";
        cout << "Correct Answer: " << correctAnswers[i] << ", ";
        cout << "Your Answer: " << studentAnswers[i] << ", ";
        
        if (correctAnswers[i] == studentAnswers[i]) {
            cout << "Mark: Correct\n";
            score++;
        } else {
            cout << "Mark: Incorrect\n";
        }
    }

    // Print the total score
    cout << "\nTotal Score: " << score << " out of " << numQuestions << endl;

    return 0;
}
