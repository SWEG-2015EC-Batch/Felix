//This program is used to calculate power
#include<iostream>
#include<math.h>
using namespace std;
int main() 
{cout << "Enter the value of x: ";
double x= 0;
cin >> x;
cout << "Entre the Value of Y: " ;
double y= 0;
cin >> y;
int result = pow(x, y);
cout << x <<"   to the power of  "<< y <<" is: " << result << endl;
    return 0;
}
