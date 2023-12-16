//This program displays various patterns based on the users input
#include <iostream>
using namespace std;

int main() {
    // Display header
    cout << "                  Pattern Display" << endl;
    cout << "------------------------------------------------------" << endl;

    // Initialize variables
    int row, column, size, menu, status;
    char letter = 'a';
    int num_matrix {1};

    do {
        // Display welcome message
        cout << "\nWELCOME TO PATTERN DISPLAYER\n" << endl;

        do {
            // Display pattern choices and get user input
            cout << "1. Box\n2. Hollow Box\n3. Right Angled Triangle\n4. Hollow Right Angled Triangle\n5. Inverted Right angled Triangle\n6. Hollow Inverted Right Angled Triangle\n7. 1-5 Box Number Matrix\n8. 1-5 Right Angled Triangle Matrix\n9. Pyramid\n10. Hollow Pyramid\n11. Inverted Pyramid\n12. a-e Matrix\n13. a-x Matrix\n14. Box matrix starting from 10\n";
            cout << "------------------------------------------------------\n";
            cout << "Choose a pattern from the above: ";
            cin >> menu;
            cout <<endl;

            // Validate user input
            if (menu < 1 || menu > 14) {
                cout << "You entered an invalid choice. Please try again.\n";
            }
        } while (menu < 1 || menu > 14);

        // Display the selected pattern based on user input
        switch (menu) {
            case 1:
                // Box pattern
                cout << "Please enter the number of columns for the box: ";
                cin >> column;
                cout << "Please enter the number of rows for the box: ";
                cin >> row;
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 2:
                // Hollow Box pattern
                cout << "Please enter the number of columns for the hollow box: ";
                cin >> column;
                cout << "Please enter the number of rows for the hollow box: ";
                cin >> row;
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        if (i == 0 || i == row - 1 || j == 0 || j == column - 1) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                // Right Angled Triangle pattern
                cout << "Please enter the number of rows you want: ";
                cin >> row;
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                // Hollow Right Angled Triangle pattern
                cout << "Enter the size of the pattern you want: ";
                cin >> size;
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j <= i; j++) {
                        if (j == 0 || j == i || i == size - 1) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }
                break;

            case 5:
                // Inverted Right Angled Triangle Pattern
                cout << "Please enter the size of the pattern you want: ";
                cin >> row;
                for (int i = 0; i < row; i++) {
                    for (int j = row; j > i; j--) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 6:
                // Inverted Hollow Right Angled Triangle Pattern
                cout << "Please enter the size of the pattern you want: ";
                cin >> size;
                for (int i = 0; i < size; i++) {
                    for (int j = size; j > i; j--) {
                        if (i == 0 || j == size || i == size - 1 || j == i + 1) {
                            cout << "*";
                        } else {
                            cout << " ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }
                break;
            case 7:
                //1-5 matrix
                for (int i {0}; i < 5; i++) {
                    for (int j {0}; j < 5; j++) {
                        cout << num_matrix <<" ";
                        num_matrix++;
                    }
                    num_matrix = 1;
                    cout << endl;
                }
                break;
            case 8:
                //1-5 right angled triangle
                for (int i {0}; i < 5; i++) {
                    for (int j {0}; j <= i; j++) {
                        cout << num_matrix <<" ";
                        num_matrix++;
                    }
                    num_matrix = 1;
                    cout << endl;
                }
                break;
            case 9: 
                //Pyramid
                cout << "Please enter the size of the pyramid: ";
                cin >> size;
                for (int i {0}; i < size; i++) {
                    for (int j {0}; j < 2 * size - 1; j++) {
                        if (j >= size - i - 1 && j <= size + i - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 10:
                // Hollow Pyramid
                cout << "Please enter the size of the hollow pyramid: ";
                cin >> size;
                for (int i = {0}; i < size; i++) {
                    for (int j = {0}; j < 2 * size - 1; j++) {
                        if (j == size - i - 1 || j == size + i - 1 || i == size - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 11:
                // Inverted Pyramid
                cout << "Please enter the size of the inverted pyramid: ";
                cin >> size;
                for (int i {0}; i < size; i++) {
                    for (int j {0}; j < 2 * size - 1; j++) {
                        if (j >= i && j < 2 * size - i - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            case 12:
                // 'a' to 'e' Box Letter Matrix
                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        cout << letter << " ";
                        letter++;
                    }
                    letter = 'a';
                    cout << endl;
                }
                break;
            case 13:
                //'a' to 'x' Box letter matrix
                for (int i {0}; i < 4; i++) {
                    for (int j {0}; j < 6; j++) {
                        if (letter <= 'x'){
                           cout << letter << " ";
                           letter++; 
                        }
                    }
                    cout <<endl;
                }
                break;
            case 14:
                //Box matrix starting from 10
                cout <<"Please enter the number of column: ";
                cin >> column;
                cout <<"Please enter the number of rows: ";
                cin >> row;
                int num {10};
                for (int i {0}; i < row; i++) {
                    for (int j {0}; j < column; j++) {
                        cout <<num<<" ";
                        num++;
                    }
                    cout <<endl;
                }
                break;
        }

        // Prompt the user to continue or quit
        cout << "\nPlease enter 0 to quit or any other number to continue: ";
        cin >> status;
    } while (status != 0);

    return 0;
}
