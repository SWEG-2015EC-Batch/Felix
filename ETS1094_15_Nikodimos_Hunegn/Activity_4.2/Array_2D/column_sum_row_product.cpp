#include <iostream>

using namespace std;

int main(){
    
    int array[3][3] = {};
    int col_sum[3] = {};
    int row_pro[3] = {};
    int sum = 0, product = 1;

    cout<<endl<<endl;

    for(int i = 0; i < 3; i++){
        cout<<"Enter the elements of row "<<i+1<<" space separated: ";
        for(int j = 0; j < 3; j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum += array[i][j];
            product *= array[j][i];
        }
        col_sum[i] = sum;
        row_pro[i] = product;
        product = 1;
        sum = 0;
    }

    for(int i = 0; i < 3; i++){
        cout<<"Sum of column "<<i + 1<<" is: "<<col_sum[i]<<endl;
        cout<<"Product of row "<<i + 1<<" is: "<<row_pro[i]<<endl;
    }

}