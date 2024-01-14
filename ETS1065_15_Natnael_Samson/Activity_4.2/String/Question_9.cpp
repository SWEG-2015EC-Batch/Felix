#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int maxProgramLength = 50;

    char favoriteProgram1[] = "Game of Thrones";

    char favoriteProgram2[maxProgramLength];
    strcpy(favoriteProgram2, "Breaking Bad");

    cout << "My Two Favorite TV Programs:" << endl;
    cout << "1. " << favoriteProgram1 << endl;
    cout << "2. " << favoriteProgram2 << endl;

    return 0;
}
