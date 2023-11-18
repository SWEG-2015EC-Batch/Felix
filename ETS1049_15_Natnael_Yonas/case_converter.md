# Problem Analysis
   1. Input: The user is prompted to enter a letter.
   2. Process: The program checks if the entered letter is lowercase using islower(). If it is lowercase, it displays the uppercase equivalent using
               toupper(). If the letter is not lowercase, it checks if it is uppercase using isupper(). If it is uppercase, it displays the lowercase equivalent using
               tolower(). If the entered character is not a letter, it displays an error message.
   3. output: The program displays either the uppercase equivalent, lowercase equivalent, or an error message based on the user's input.

# Algorithm Design
   1. start
   2. Prompt user for input: "Enter a letter: " 
   3.  Read user input and store it in the variable letter
   4.  check for islower(letter) 
   5.  If islower(letter) is true Change it to uppercase using toupper(), then num 6
   6. Print 'Uppercase equivalent: ' followed by the uppercase of the letter then num 12
   7.  If islower(letter) is false, then num 8
   8.  check if the letter is isupper, then num 9 and 11
   9.  If isupper(letter) is true Change it to lowercase using tolower(), then num 10
   10.  Print 'Lowercase equivalent:'followed by the lowercase of the letter, then num 12
   11.   If isupper(letter) is false then print "Invalid input" then num 12
   12.  End program
# flowchart

```mermaid
graph TD;
A([Start]) --> B[/Enter a letter:/];
B --> C{"check for islower(letter)"};
C --> |If true|D["Change the letter to uppercase using toupper()"];
D--> E[/"Print 'Uppercase equivalent: ' followed by the uppercase of the letter"/];
C-->|If false| F{"check for isupper(letter)"};
F --> |If true|G["Change the letter to lowercase using tolower()"];
G -->H[/"Print 'Lowercase equivalent:'followed by the lowercase of the letter"/];
F-->|If false|I[/Invalid input/]
I-->J([End]);
E-->J([End]);
H-->J([End]);


