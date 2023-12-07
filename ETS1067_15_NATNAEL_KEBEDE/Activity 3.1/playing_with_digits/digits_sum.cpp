//this is a program that add the digits for a given number
#include <iostream>
using namespace std;
int main ()
{
    int num,temp,sum = 0;
   int reverse = 0;
   cout <<"enter the number: ";
   cin >>num;
   while(num>0)
   {
    temp = num % 10;
   num = num/10;
   sum += temp;
   }
   cout<<"---------------------------------"<<endl;
   cout <<"the sum of the digits = "<<sum<<endl; 
   cout<<"---------------------------------"<<endl;
     return 0;
    
}
