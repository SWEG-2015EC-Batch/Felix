//this program tells whether a given number is palindrome or not
#include <iostream>
using namespace std;
int main ()
{
    int num,temp,copynum;
   int reverse = 0;
   cout <<"enter the number: ";
   cin >>num;
   copynum = num;
   while(num>0)
   {
    temp = num % 10;
    reverse = (reverse * 10) + temp;
    num = num/10;
   }
   cout<<reverse<<endl;
   if (copynum == reverse)
   {
    cout << "palindrome"<<copynum;

   }
   else{
    cout<<"not palindrome"<<copynum;
   }

    
   return 0;
    
}
