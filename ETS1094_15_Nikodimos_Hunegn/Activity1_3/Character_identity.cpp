#include <iostream>
#include <cctype>

using namespace std;

int main(){
    
    char x;
    
    cout<<"Enter a character to check its type: ";
    cin>>x;
    
    if(isalpha(x)){
        if(isupper(x)){
            if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
                cout<<"The character you entered is an upper case vowel letter";
            }
            else{
                cout<<"The character you entered is an upper case consonant letter";
            }
        }
        else{
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
                cout<<"The character you entered is an lower case vowel letter";
            }
            else{
                cout<<"The character you entered is an lower case consonant letter";
            }
        }
    }
    else if(isdigit(x)){
        if(x % 2 == 0){
            cout<<"The character you entered is an even number";
        }
        else{
            cout<<"The character you entered is an odd number";
        }
    }
    else if(ispunct(x)){
        cout<<"The character you entered is a special character";
    }
    else{
        cout<<"The character you entered is not alphabet, number, or special character";
    }
    
    return 0;
}
