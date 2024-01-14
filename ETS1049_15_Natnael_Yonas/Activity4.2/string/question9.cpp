#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char favoriteProgram1[50] = "Game of Thrones";
    char favoriteProgram2[50];
    strcpy(favoriteProgram2, "preason break");
    cout << "My Two Favorite TV Programs are: "<< favoriteProgram1 <<" and "<<favoriteProgram2 << endl;

    return 0;
}
