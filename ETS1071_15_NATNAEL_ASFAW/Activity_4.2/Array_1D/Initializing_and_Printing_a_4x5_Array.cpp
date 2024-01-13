#include <iostream>
using namespace std;
int main() {

    int array[4][5] = {
        {16, 22, 99, 4, 18},
        {-258, 4,101,5, 98},
        {105, 6, 15, 2, 45},
        {33, 88, 72, 16, 3}
    };

    cout << "The 4-by-5 array:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << array[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}
