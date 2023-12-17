//'a' to 'x' rectangle
#include <iostream>
using namespace std;
int main(){
                for (int i {0}; i < 4; i++) {
                    for (int j {0}; j < 6; j++) {
                        if (letter <= 'x'){
                           cout << letter << " ";
                           letter++; 
                        }
                    }
                    cout <<endl;
                }
                return 0;
}
