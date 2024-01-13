#include <iostream>
using namespace std;

int main() {
    const int numPeople = 5;  

    
    bool friends[numPeople][numPeople] = {
        {false, true,  false, true,  false},
        {true,  false, true,  true,  false},
        {false, true,  false, false, true },
        {true,  true,  false, false, true },
        {false, false, true,  true,  false}
    };

   
    cout << "Friendship Matrix:" << endl;
    for (int i = 0; i < numPeople; ++i) {
        for (int j = 0; j < numPeople; ++j) {
            if (friends[i][j]) {
                cout << "* ";
            } else {
                cout << "  ";  
            }
        }
        cout << endl;
    }

    int friendPairsCount = 0;
    for (int i = 0; i < numPeople; ++i) {
        for (int j = i + 1; j < numPeople; ++j) {
            if (friends[i][j]) {
                cout << "Friends: Person " << i + 1 << " and Person " << j + 1 << endl;
                friendPairsCount++;
            }
        }
    }

    cout << "Total number of friend pairs: " << friendPairsCount << endl;

    return 0;
}
