#include <iostream>
using namespace std;
int main ()
{
    int coulumn = 0,row;
   
       cout << "enter the coulumn of your pattern: "; 
       cin>>coulumn;
        cout << "enter the row of your pattern: "; 
        cin>>row;
    for (int  j = 0; j < row; j++)
    {
        for (int  i = 1; i <= coulumn ; i++)
    {
        cout <<  "* ";
    }
    cout<<endl;
    }
}
