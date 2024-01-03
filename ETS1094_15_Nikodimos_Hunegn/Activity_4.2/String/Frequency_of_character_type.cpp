#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string text = "";
    int vowel = 0, consonant = 0, digit = 0, special = 0;

    char vowels[5] = {'a','e','i','o','u'};

    cout<<"\nEnter text: ";
    getline(cin, text);

    for(int i = 0; i < text.size(); i++){
        
        if(isdigit(text[i])){
            digit++;
        }
        else if(isalpha(text[i])){
            
            int vowel_count = 0;

            for(int j = 0; j < 5; j++){
                if(tolower(text[i]) == vowels[j]){
                    vowel_count++;
                }
            }

            if(vowel_count > 0){
                vowel++;
            }
            else if(vowel_count <= 0 && text[i] != ' '){
                consonant++;
            }
        }
        else{
            if(text[i] != ' '){
                special++;
            }
        }

    }

cout<<"Vowels: "<<vowel<<endl;
cout<<"Consonants: "<<consonant<<endl;
cout<<"digits: "<<digit<<endl;
cout<<"special characters: "<<special<<endl;
}