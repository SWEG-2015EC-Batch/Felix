/*this program identifies whether a given character is even digit or odd digit
or vowel uppercase letter or consonant uppercase letter and also lowercase*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char C;
    cout<< "Enter the character: ";
    cin>>C;
    if (isdigit(C))
    {
        if (C % 2 == 0)
        {
          cout<<"The character is even digit "<<endl;  
        }
        else{
            cout<<"The character is odd digit"<<endl;
        }
    }
    else if (isalpha(C))
    {
        if (C == 'A' || C == 'a' || C == 'E' || C == 'e'  || C == 'I' || C == 'i' || C == 'O' || C == 'o' || C == 'U' || C == 'u')
        {
            if (isupper(C))
            {
             cout<<"The character is vowel uppercase letter"<<endl;   
            }
            else{
                cout<<"The character is vowel lowercase letter"<<endl;
            }
        }
        else{
            if (isupper(C))
            {
                cout<<"The character is consonant uppercase letter"<<endl;
            }
            else{
                cout<<"The character is consonant lowercase letter"<<endl;
            }
        }
    }
    else{
        cout<<"The character is special character"<<endl;
    }
     return 0;
}
