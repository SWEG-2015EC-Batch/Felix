//this program finds the reverse of the given number
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
return 0;
    
}
