#include <iostream>

using namespace std;

int main(void)
{ 
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    
    cout << "Address of balances"<<endl;
    for (int i = 0; i < 5; ++i)
    {
    cout << "address of balance " << i<<" is "  << &balance[i] << "\n";
    }

    cout << "Elements of balance "<<endl;
    double *balancePtr = balance; 
    for (int i = 0; i < 5; i++)
    {
        cout << "Element of  balance "<< i <<  " is " << *(balancePtr + i) << "\n";
    }

    int arr[3][4] = {{ 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};
    
    
    cout << "Address of arr "<<endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << "Address of arr  "<< i << j <<" is " <<&arr[i][j] << "\n";
        }
    }

   
    cout << "Elements of arr "<<endl;
    int *arrPtr = &arr[0][0]; 
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << "Element of " << i * 4 + j <<" is "<< *(arrPtr + i * 4 + j) << "\n";
        }
    }

    return 0;
}
