// Hollow full Pyramid
#include <iostream>
using namespace std;
int main(){
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
                return 0;
}
