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
   4.  If islower(letter) is true: Display "Uppercase equivalent: " followed by the uppercase of the letter
   5.  Else, if isupper(letter) is true:  Display "Lowercase equivalent: " followed by the lowercase of the letter
   6.  Else: Display "Invalid input. Please enter a letter."
   7.  End program
# flowchart

---mermaid
graph TD,
([Start]) --> [/Enter a letter/];
