//this is a program that count the number of digits for a given number
#include <iostream>
using namespace std;
int main ()
{
    int num,temp,counter = 0;
   int reverse = 0;
   cout <<"enter the number: ";
   cin >>num;
   while(num>0)
   {
    temp = num % 10;
    reverse = (reverse * 10) + temp;
    num = num/10;
    counter++;
   }
   cout <<"the number of digits is "<< counter;
     return 0;
    
}
