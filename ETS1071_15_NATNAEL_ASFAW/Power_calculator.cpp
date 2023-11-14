#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;

    //Get input for x and y from the user
     cout <<"Enter the value of X: ";
     cin >> x;

     cout <<"Enter the value of Y: ";
     cin >> y;

     // Calculate the result of x^y using the pow()function from cmath
     double result = pow(x,y);

     // Display the result
      cout << "Result of "<< x <<" raised to the power of "<< y <<" is:" << result<< endl;

    return 0;
}
