# include <iostream>
using namespace std;
int main(){
    cout<<"========================Character Identifier============================"<<endl;
    char input;
    cout<<"plese enter any character: ";
    cin>>input;
    if(isalpha(input)){
        if(isupper(input)){
            if(input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U'){
                    cout<<"Your input is upper case vowel"<<endl;
            }else{
                cout<<"Your input is upper case consonant"<<endl;
            }
        }else{
            if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
                    cout<<"Your input is lower case vowel"<<endl;
            }else{
                cout<<"Your input is lower case consonant"<<endl;
            }
        }
    }else if(isdigit(input)){
        int num = input;
        if(num % 2 == 0){
            cout<<"Your input is an even number Digit."<<endl;
        }else{
             cout<<"Your input is an odd number Digit."<<endl;
        }
    }else{
        cout<<"Your input is a special character."<<endl;
    }
    cout<<"=========================================================================="<<endl;
return 0;
}
