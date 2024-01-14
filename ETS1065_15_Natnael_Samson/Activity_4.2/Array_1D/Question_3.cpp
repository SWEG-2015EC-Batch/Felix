#include <iostream>
using namespace std;
int main () {
    int first[3][3], second[3][3], sum[3][3];
    cout <<"Please enter the first matrix: "<<endl;
    for (int i {0}; i < 3; i++){
        cout<<"Please enter 3 values of the "<<i+1<<" row each followed by space: ";
        for (int j {0}; j < 3; j++){
            cin >> first[i][j];
        }
        cout <<endl;
    }
    cout <<"Please enter the second matrix: "<<endl;
    for (int i {0}; i < 3; i++){
        cout<<"Please enter 3 values of the "<<i+1<<" row each followed by space: ";
        for (int j {0}; j < 3; j++){
            cin >> second[i][j];
        }
        cout <<endl;
    }
    cout <<"sum matrix\n";
    for (int i {0}; i <3; i++) {
        for (int j {0}; j <3; j++) {
            sum[i][j] = first[i][j] + second[i][j];
            cout <<sum[i][j]<<"\t";
        }
        cout <<endl;
    }
    return 0;
}
