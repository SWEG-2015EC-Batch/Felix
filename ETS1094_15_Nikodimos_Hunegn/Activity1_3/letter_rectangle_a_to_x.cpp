#include <iostream>

using namespace std;

int main() {
    
    int i,j,k = 0;
    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X'};

    for( i = 0; i < 4; i++) {
        for(j = 0; j < 6; j++){
            cout<<letters[k]<<"  ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}
