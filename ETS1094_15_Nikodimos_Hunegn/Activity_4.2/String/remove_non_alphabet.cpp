#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string text = "", newtext = "";

    cout<<"\nEnter the text: ";
    getline(cin,text);

    for(int i = 0; i < text.size(); i++){
        if(isalpha(text[i])){
            newtext += text[i];
        }
    }
    cout<<"\nText with alphabet characters only: "<<newtext<<endl;
}