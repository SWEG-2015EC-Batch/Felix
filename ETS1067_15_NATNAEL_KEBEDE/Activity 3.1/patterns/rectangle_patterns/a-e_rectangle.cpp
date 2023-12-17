 // 'a' to 'e' rectangle
#include <iostream>
using namespace std;
int main(){
                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 5; j++) {
                        cout << letter << " ";
                        letter++;
                    }
                    letter = 'a';
                    cout << endl;
                }
                return 0;
}
