#include <iostream>
#include <cctype>

using namespace std;

int main(){

    string text = "";

    cout<<"Enter the text: ";
    getline(cin, text);

    for(int i = 0; i < text.size(); i++){
        text[i] = toupper(text[i]);
    }

    cout<<"Uppercase: "<<text<<endl;

    for(int i = 0; i < text.size(); i++){
        text[i] = tolower(text[i]);
    }

    cout<<"Lowercase: "<<text;
return 0;
}
