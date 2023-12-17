#include <iostream>

using namespace std;

int main()
{
    int i,j;
    char letters[] = {'a','b','c','d','e'};
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5 ; j++){
            cout<<letters[j]<<" ";
        }
        cout<<endl;
    }
}
