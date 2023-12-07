//this is a program that multiply the even digits for a given number
#include <iostream>
using namespace std;
int main ()
{
    int num,temp,product;
   int reverse = 0;
   cout <<"enter the number: ";
   cin >>num;
   
   while(num>0)
   {
    temp = num % 10;
   num = num/10;
    if(temp % 2 == 0){
   product *= temp;
   }
   }
   
   cout<<"---------------------------------"<<endl;
   cout <<"the product of even digits = "<<product<<endl; 
   cout<<"---------------------------------"<<endl;
     return 0;
    
}
