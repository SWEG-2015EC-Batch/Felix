#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxNames = 10;
    const int maxLength = 50;

    char names[maxNames][maxLength];

    int numberOfNames;
    cout << "Enter the number of names (up to " << maxNames << "): ";
    cin >> numberOfNames;

    cin.ignore();

    for (int i = 0; i < numberOfNames; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        cin.getline(names[i], maxLength);
    }

    for (int i = 0; i < numberOfNames - 1; ++i) {
        for (int j = 0; j < numberOfNames - i - 1; ++j) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[maxLength];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < numberOfNames; ++i) {
        cout << names[i] << endl;
    }

    return 0;
}
