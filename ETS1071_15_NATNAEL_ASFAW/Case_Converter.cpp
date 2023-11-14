#include <iostream>
#include <cctype>
using namespace std;

int main(){
   char letter;
       cout <<"Enter a letter:";
       cin >> letter;

       if (isalpha(letter)) {
        cout << "You entered :"<< letter <<endl;
      char upper = toupper(letter);
      char lower = tolower(letter);
      cout << "Uppercase equivalent:"<< upper<<endl;
      cout << "Lowercase equivalent:"<< lower<<endl;
       } else{
        cout << "Please enter a valid letter."<< endl;
       }

    return 0;

    }
