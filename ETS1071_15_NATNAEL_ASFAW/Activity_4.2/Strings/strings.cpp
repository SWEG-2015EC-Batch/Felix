//This program displays various string based questions based on the users input
#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    // Display header
    cout << "                   Display" << endl;
    cout << "------------------------------------------------------" << endl;

    // Initialize variables
    int  size, menu, status;



    do {
        // Display welcome message
        cout << "\nWELCOME TO The DISPLAYER\n" << endl;

        do {
            // Display what you want choices and get user input
            cout << "1. Count vowels and consonants in a string\n2. Check if a word is a palindrome\n3. Remove non-alphabetic characters from a string\n4.  4. Tokenize a line of text using space as delimiter\n5. Find the frequency of vowels, consonants, digits, and special characters in a string\n6. Find the frequency of characters within a string\n7. Sort names in alphabetical order\n8. Convert a line of text to uppercase and lowercase\n9. Store and print favorite television programs\n10. Password validation\n11.  Print user initials\n12. Test score calculator\n";
            cout << "------------------------------------------------------\n";
            cout << "Choose you want from the above: ";
            cin >> menu;
            cout <<endl;

            // Validate user input
            if (menu < 1 || menu > 14) {
                cout << "You entered an invalid choice. Please try again.\n";
            }
        } while (menu < 1 || menu > 14);

        // Display the selected alternative based on user input
        switch (menu) {
            case 1:
               // 1. Count vowels and consonants in a string
        string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int vowels = 0, consonants = 0;
    for (char ch : inputString) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
                break;
            case 2:
                 // 2. Check if a word is a palindrome
         string word;
    cout << "Enter a word: ";
    cin >> word;
    bool isPalindrome = true;
    for (int i = 0; i < word.length() / 2; ++i) {
        if (word[i] != word[word.length() - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
                break;

            case 3:
                 // 3. Remove non-alphabetic characters from a string
            string stringWithNonAlphas = "Hello123!";
    string stringWithAlphas;
    for (char ch : stringWithNonAlphas) {
        if (isalpha(ch)) {
            stringWithAlphas += ch;
        }
    }
    cout << "String with non-alphabet characters removed: " << stringWithAlphas << endl;
                break;

            case 4:
                // 4. Tokenize a line of text using space as delimiter
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
                break;

            case 5:
                // 5. Find the frequency of vowels, consonants, digits, and special characters in a string
    string testString = "Hello, World! 123";
    int vowelCount = 0, consonantCount = 0, digitCount = 0, specialCharCount = 0;
    for (char ch : testString) {
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (isdigit(ch)) {
            digitCount++;
        } else if (!isspace(ch)) {
            specialCharCount++;
        }
    }
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Special Characters: " << specialCharCount << endl;
                break;

            case 6:
                 // 6. Find the frequency of characters within a string
    string input = "Hello, World!";
    int charFrequency[256] = {0}; // Assuming ASCII characters
    for (char ch : input) {
        charFrequency[ch]++;
    }
    char mostFrequentChar = '\0';
    char leastFrequentChar = '\0';
    int maxFrequency = 0;
    int minFrequency = input.length() + 1;
    for (int i = 0; i < 256; i++) {
        if (charFrequency[i] > 0) {
            if (charFrequency[i] > maxFrequency) {
                maxFrequency = charFrequency[i];
                mostFrequentChar = static_cast<char>(i);
            }
            if (charFrequency[i] < minFrequency) {
                minFrequency = charFrequency[i];
                leastFrequentChar = static_cast<char>(i);
            }
        }
    }
    cout << "Most frequent character: " << mostFrequentChar << " (Frequency: " << maxFrequency << ")" << endl;
    cout << "Least frequent character: " << leastFrequentChar << " (Frequency: " << minFrequency << ")" << endl;
                break;
            case 7:
                // 7. Sort names in alphabetical order
    string names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int numNames = sizeof(names) / sizeof(names[0]);
    sort(names, names + numNames);
    cout << "Names in alphabetical order:" << endl;
    for (const string& name : names) {
        cout << name << endl;
    }

                break;
            case 8:
                 // 8. Convert a line of text to uppercase and lowercase
    string text = "Hello, World!";
    cout << "Uppercase: ";
    for (char ch : text) {
        cout << static_cast<char>(toupper(ch));
    }
    cout << endl;
    cout << "Lowercase: ";
    for (char ch : text) {
        cout << static_cast<char>(tolower(ch));
    }
    cout << endl;
                break;
            case 9:
               // 9. Store and print favorite television programs
    string favoritePrograms[2] = {"Breaking Bad"};
    string secondFavoriteProgram = "Game of Thrones";
    cout << "First favorite program: " << favoritePrograms[0] << endl;
    cout << "Second favorite program: " << secondFavoriteProgram <<endl;

                break;

            case 10:
                // 10. Password validation
    string password = "password123";
    string inputPassword;
    cout << "Enter the password: ";
    cin >> inputPassword;
    if (inputPassword == password) {
        cout << "Correct password!" << endl;
    } else {
        cout << "Incorrect password!" << endl;
    }
                break;

            case 11:
                 // 11. Print user initials
    string firstName, middleName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your middle name: ";
    cin >> middleName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Your initials are: " << firstName[0] << middleName[0] << lastName[0] << endl;
                break;
            case 12:
               // 12. Test score calculator
    char answerKey[] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (answerKey[i] == studentAnswers[i]) {
            score++;
        }
    }
    cout << "Student's test score: " << score << endl;
                break;


        }

        // Prompt the user to continue or quit
        cout << "\nPlease enter 0 to quit or any other number to continue: ";
        cin >> status;
    } while (status != 0);

    return 0;
}
