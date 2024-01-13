#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    bool friendships[SIZE][SIZE] = {
        {false, true,  false, true,  true },
        {true,  false, true,  false, true },
        {false, true,  false, false, false},
        {true,  false, false, false, true },
        {true,  true,  false, true,  false}
    };

    int numFriendPairs = 0;

    // Count pairs of friends
    for (int i = 0; i < SIZE; ++i) {
        for (int j = i + 1; j < SIZE; ++j) {
            if (friendships[i][j]) {
                numFriendPairs++;
            }
        }
    }

    cout << "Number of pairs of friends: " << numFriendPairs << endl;

    return 0;
}
