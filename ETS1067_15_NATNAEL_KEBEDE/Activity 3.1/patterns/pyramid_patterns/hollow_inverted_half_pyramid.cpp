// Inverted Hollow Right Angled Triangle Pattern
#include <iostream>
using namespace std;
int main(){
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
                return 0;
}
