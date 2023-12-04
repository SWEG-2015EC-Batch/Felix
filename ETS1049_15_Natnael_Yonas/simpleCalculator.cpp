#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num= 0;
    
    do{
        cout << " ===============================CALCULATOR ============================="<<endl;
        int num1, num2 = 0;
        cout << "Enter num1:  " ;
        cin >> num1;
        cout << "Enter num2:  ";
        cin >> num2;
        loop:
        char operate ;
        cout << "Enter any operater from (+,-,*,/,%):  " ;
        cin >> operate ;
        int result;
        switch (operate) {
           case '+': result = num1 + num2;
           break;
            case '-': result = num1 - num2;
            break;
           case '*': result = num1 * num2;
           break;
            case '/': result = num1 / num2;
            break;
            case '%': result = num1 % num2;
           default: cout << "unknown operator, please enter valid operator" << operate << '\n';
           goto loop;
           break;
                        }
        cout <<"The Result is:  " << result<<endl;  
         cout<< "Enter 0 to terminate and any number to continue:  "; 
        cin >> num;
        cout<<"============================================================================"<<endl;        
    }while(num!=0);
    return 0;
}
