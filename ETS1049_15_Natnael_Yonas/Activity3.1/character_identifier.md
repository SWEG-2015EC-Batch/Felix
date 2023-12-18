# problem Analysis
Input: any character from the keybord
process: check if the character is even digit, odd digit, vowel alphaber, consonant alphabet or special character
output: Type of the character
# Flow Chart
```mermaid
graph TD;
A([Start])--> B[/Prompt user to enter any character/];
B-->C{"check if the character is digit using isdigit()"};
C-->|true|D{"check if the digit is even using num%2=0 "};
D-->|true|E[/display your input is even digit/];
D-->|false|F[/display your input is odd digit/];
C-->|false|G{"check if the character is alphabet using isalpha()"};
G-->|true|H{check if the alphabet is uppercase};
H-->|true|I{check if the alphabet is vowel};
I-->J[/display your input is a vowel alphabet in uppercase /];
I-->|false|K[/display your input is a consonant alphabet in uppercase /];
H-->|false|L{check if the alphabet is vowel};
L-->|true|M[/display your input is a vowel alphabet in lowercase /];
L-->|false|N[/display your input is a consonant alphabet in lowercase /];
G-->|false|O[/display your input is a special character /];
O-->P([END]);
K-->P;
J-->P;
N-->P;
M-->P;
E-->P;
F-->P;
```
# Pseudo code
1. Display "Enter a character: " message to prompt the user for input.
2. Read the input character and store it in the variable ch.

3. // Check character type
4. If ch is an alphabetic character:
   a. Display "Alphabetic character." message.

   b. If ch is an uppercase letter:

      i. Display "Uppercase letter." message.

   c. Else:

      i. Display "Lowercase letter." message.
6. Else if ch is a digit:

   a. Display "Digit." message.
8. Else:

   a. Display "Special character." message.

10. // Check if alphabetic character is a vowel or consonant
11. If ch is an alphabetic character:
    a. Convert ch to lowercase using tolower(ch).
     b. Switch on the lowercase character:
      i. Case 'a', 'e', 'i', 'o', 'u':

        - Display "Vowel." message.

         - Break.

      ii. Default:

         - Display "Consonant." message.

13. // Check if numeric character is even or odd
14. If ch is a digit:
    a. Convert ch to an integer: num = ch - '0'.

    b. If num is even:

        - Display "Even number." message.

    c. Else:

        - Display "Odd number." message.

16. End
