#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string text = "";
    int vowel = 0, consonant = 0;

    char vowels[5] = {'a','e','i','o','u'};

    getline(cin, text);

    for(int i = 0; i < text.size(); i++){
        
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

cout<<"Vowels: "<<vowel<<endl;
cout<<"Consonants: "<<consonant<<endl;
}
