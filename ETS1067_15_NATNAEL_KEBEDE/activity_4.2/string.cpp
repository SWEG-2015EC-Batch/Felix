#include <iostream>
#include <cctype> // for isalpha and tolower
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    cout<<"question number 1 that count number of vowels and consonants in astring"<<endl;
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int vowelCount = 0;
    int consonantCount = 0;

    for (int i = 0; i < inputString.size(); ++i) {
      

        // Check if the character is an alphabet letter
        if (isalpha(inputString[i])) {
            // Convert the character to lowercase for case-insensitive comparison
            char lowercaseChar = tolower(inputString[i]);

            // Check if the lowercase character is a vowel
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
                lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowelCount++; 
            } else {
                consonantCount++; 
            }
        }
        // Ignore non-alphabetic characters
    }

    // Display the final counts of vowels and consonants
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;
    cout<<"==========================================================="<<endl;


    cout <<"question number 2 that check if a word is palindrome or not"<<endl;
    string inputWord;

    cout << "Enter a word: ";
    cin >> inputWord;

    string reversedWord = inputWord;
    reverse(reversedWord.begin(), reversedWord.end());

    // Convert both original and reversed words to lowercase for case-insensitive comparison
    transform(inputWord.begin(), inputWord.end(), inputWord.begin(), ::tolower);
    transform(reversedWord.begin(), reversedWord.end(), reversedWord.begin(), ::tolower);

    if (inputWord == reversedWord) {
        cout << inputWord << " is a palindrome." << endl;
    } else {
        cout << inputWord << " is not a palindrome." << endl;
    }
    cout<<"==========================================================="<<endl;


    cout <<"question number 3 that remove non alphabetic character from string"<<endl;
    string word;
    cout<<"enter the word: ";
    getline(cin,word);
    for (int i = 0; i < word.size(); i++)
    {
        if (isalpha(word[i]))
        {
            cout<<word[i];
        }
        
    }
     cout<<"==========================================================="<<endl;
     
    cout<<"question number 4 that tokenize lines of text"<<endl;
     string line = "This is a sample sentence.";
    string token;
    cout << "Tokenizing the line: ";
    size_t pos = 0;
    while ((pos = line.find(' ')) != string::npos) {
        token = line.substr(0, pos);
        cout << token << " ";
        line.erase(0, pos + 1);
    }
    cout << line << endl;
    cout<<"==========================================================="<<endl;

    cout<<"question number 5 that find frequency of vowels,consonants,digit and special character "<<endl;
    string str;
    cout<<"enter the word: ";
    cin>>str;
     int countVowel=0,countConsonant=0,countDigit=0
    ,countSpecialChar=0;
    // Iterate through all characters in string
    for (int i = 0; i <= str.length() - 1; i
    ++)
    {
        char c = tolower(str[i]);
        /* Check if current character is vowel or not */
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        countVowel++;
        else if ('0' <= c && c <= '9')
        countDigit++;
        /* Check if current character is special character or not */
        else if (!isalnum(c))
        countSpecialChar++;
        /* Check if current character is consonant or not */
        else
        countConsonant++;
        }
        cout << "Number of Vowels : " << countVowel << "\n";
        cout << "Number of Consonants : " << countConsonant << "\n";
        cout << "Number of Digits : " << countDigit << "\n";
        cout << "Number of Special Characters : " << countSpecialChar << "\n";
        
        cout<<"========================================================"<<endl;

        cout<<"question number 6 that largest and smallest frequency respctively"<<endl;
        string text = "";
    int largest = 0, lowest = 2, i_larges[text.size()] = {}, i_lows[text.size()] = {}, larges = 0, lows = 0; 
    
    cout<<"Enter the text: ";
    getline(cin,text);

    int frequency[text.size()] = {};

    for(int i = 0; i < text.size(); i++){
        int counter = 0;
        for(int j = 0; j < text.size(); j++){
            if(text[i] == text[j]){
                counter++;
            }
        }
        frequency[i] = counter;
        if(counter > largest){
            largest = counter;
        }
        
        if(counter < lowest){
            lowest = counter;
        }
    }

    for(int i = 0; i < text.size(); i++){
        if(largest == frequency[i]){
            i_larges[larges] = i;
            larges++;
        }
        else if(lowest == frequency[i]){
            i_lows[lows] = i;
            lows++;
        }
    }

    cout<<"Largest frequency: ";
    for(int i = 0; i < larges; i++){
        cout<<text[i_larges[i]]<<", ";
    };
    cout<<"\nLowest frequency: ";
    for(int i = 0; i < lows; i++){
        cout<<text[i_lows[i]]<<", ";
    }
    cout<<"========================================================"<<endl;


    cout<<"question number 7 that accept name of persons and put them in alphabetical order"<<endl;
    string names[10];
    int n;
    cin>>n;
    cout<<"Enter the names of "<<n<<" people:"<<endl;
    for(int i=0; i<n; i++) {
        string temp;
        cin >>temp;
        bool flag = true;
        for (int j = 0; j < i; j++) {
            if (names[j] == temp) {
                flag = false;
                break;
                }
                }
                if (flag){
                    names[i]=temp;
                    }
                    }
                    sort(names, names + n);
                    cout << "Alphabetically sorted list of names are : \n";
                    for (int i = 0; i < n; i++)
                    cout << names[i] << "\t";
     
     cout<<"========================================================"<<endl;

     cout << "Question number 8 that inputs a line of text and outputs the text twice, once in all uppercase and once in all lowercase letters." << endl;
     string text2 = "hello!world"; // Use string instead of char array
    // Uppercase
    cout << "Uppercase: ";
    for (size_t i = 0; i < text2.length(); ++i) {
        
        cout << static_cast<char>(toupper(text2[i]));
    }
    cout << endl;

    // Lowercase
    cout << "Lowercase: ";
    for (size_t i = 0; i < text2.length(); ++i) {
       
        if (isalpha(text2[i])) { // Check if the character is alphabetic
            if (isupper(text2[i])) {
                cout << static_cast<char>(tolower(text2[i]));
            } else {
                cout << text2[i];
            }
        } else {
            cout << text[i];
        }
    }
    cout << endl;
    cout<<"========================================================"<<endl;


    cout<<"question number 9 that store and print the names of your two favorite television programs Initialize one of the strings (assign it the first programs name) at the time you declare the array. Initialize the second value in the body of the program with the strcpy() function"<<endl;
 cout<<"========================================================"<<endl;
 // Initializing the first program's name at the time of declaration
    std::string favoriteProgram1 = "Breaking Bad";

    // Initializing the second program's name using strcpy
    char favoriteProgram2[50]; // Assuming a maximum length for the program name
    strcpy(favoriteProgram2, "Stranger Things");

    // Printing the names of the two favorite television programs
    std::cout << "My two favorite television programs are:\n";
    std::cout << "1. " << favoriteProgram1 << std::endl;
    std::cout << "2. " << favoriteProgram2 << std::endl;
cout<<"========================================================"<<endl;

cout<<"question number 10 that that stores a password and check the user password mathes"<<endl;
string pass("blabla!");   // Password to store
string userpass;         // User password input by user
cout<<"Enter your password: ";
cin>>userpass;          // Get the user password
if(userpass==pass){      // Check if it matches with the stored one
cout<<"Correct!"<<endl;}
else{cout<<"Wrong!"<<endl;}
cout<<"=========================================================="<<endl;

cout<<"question number 11 that asks the user for its first, middle and last name and then prints the users initials on-screen by printing the first character of each name."<<endl;
string firstName, middleName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your middle name: ";
    cin >> middleName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Your initials are: " << firstName[0] << middleName[0] << lastName[0] << endl;
  cout<<"=========================================================="<<endl;

  cout<< "question number 12 that print the score of students out of 10"<<endl;
   char answerKey[10] = {'A','B','C','D','A','A','B','D','D','C'};
    char answer[10];
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"please enter the answer for question number"<<i+1<<":";
        cin>>answer[i];
        if (answer[i]==answerKey[i])
        {
         result++;   
        }
        
    }
    cout <<"your total result is "<<result<<"/"<<"10";


    cout<<"==================================end==============================="<<endl;


    return 0;
}

