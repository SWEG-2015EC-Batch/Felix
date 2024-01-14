#include <iostream>
using namespace std;

int main() {
    const int size = 4;
    char friends[size][size] = {
        {'*', ' ', ' ', '*'},
        {' ', '*', '*', ' '},
        {'*', ' ', ' ', '*'},
        {'*', '*', ' ', '*'}
    };
    cout << "   ";
    for (int i = 0; i < size; i++) {
        cout << i << "  ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << i << "  ";
        for (int j = 0; j < size; j++) {
            cout << friends[i][j] << "  ";
        }
        cout << endl;
    }
    int friendPairs = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (friends[i][j] == '*' && friends[j][i] == '*') {
                friendPairs++;
            }
        }
    }

    cout << "Number of friend pairs: " << friendPairs << endl;

    return 0;
}
