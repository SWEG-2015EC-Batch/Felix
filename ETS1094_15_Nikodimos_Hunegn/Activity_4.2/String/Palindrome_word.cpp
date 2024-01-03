#include <iostream>

using namespace std;

int main(){

    string text = "", reversed = "";

    cout<<"Enter the word all in small letters: ";
    getline(cin,text);
    
    for(int i = text.size() - 1; i >= 0; i--){
        reversed += text[i];
    }

    if(text == reversed){
        cout<<"The word is palindrome";
    }
    else{
        cout<<"The word is not palindrome";
    }

}