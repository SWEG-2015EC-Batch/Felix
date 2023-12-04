#include <iostream>

using namespace std;

int main() 
{
    
    float num1,num2,status;
    char sign;
    
    do{
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
        loop:
        cout<<"Enter the Mathematical operation to be done: ";
        cin>>sign;
        switch(sign){
            case '+':
                cout<<num1<<" "<<sign<<" "<<num2<<" = "<< num1 + num2<<endl<<endl;
                break;
            case '-':
                cout<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 - num2<<endl<<endl;
                break;
            case '*':
                cout<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 * num2<<endl<<endl;
                break;
            case '/':
                if(num2 != 0){
                    cout<<num1<<" "<<sign<<" "<<num2<<" = "<<num1 / num2<<endl<<endl;
                }
                else{
                   cout<<"Can't divide by zero!"<<endl<<endl;
                }
                break;
            case '%':
                cout<<num1<<" "<<sign<<" "<<num2<<" = "<<static_cast<int>(num1) % static_cast<int>(num2)<<endl<<endl;
                break;
            default:
                cout<<"wrong sign please input +,-,*,%, or /"<<endl;
                goto loop;
        }
        
        cout<<"Please enter 0 to terminate the program or 1 to continue: ";
        cin>>status;
        cout<<endl<<endl;
        
    }while(status != 0);
    
}
