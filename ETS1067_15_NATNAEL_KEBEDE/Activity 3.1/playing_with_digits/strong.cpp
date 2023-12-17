#include <iostream>
using namespace std;
int main()
{
    int num,temp,factorial,copynum;
    int sum = 0;
   cout <<"enter the number: ";
   cin >>num;
   copynum = num;
   
   while(num>0)
   {
    temp = num % 10;
    factorial = 1;
    for (int i = 1; i <= temp; i++)
    {
        factorial *= i;
    }
   sum = sum + factorial; 
 num = num/10;
   }
  
  
  
   if (sum == copynum)
   {
    cout << "the number is strong number. "<<endl;
   }
   else{
    cout << "the number is not strong number: "<<endl;
   }
    return 0;
}
