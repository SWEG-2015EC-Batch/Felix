problem Analysis

Input: The user is prompted to enter a letter.

Process: The program checks if the entered letter is lowercase using islower(). If it is lowercase, it displays the uppercase equivalent using toupper(). If the letter is not lowercase, it checks if it is uppercase using isupper(). If it is uppercase, it displays the lowercase equivalent using tolower(). If the entered character is not a letter, it displays an error message.

Output: The program displays either the uppercase equivalent, lowercase equivalent, or an error message based on the user's input.

                                    Algorithm Design (Pseudocode)

1 Display "Enter a letter: " prompt

2 Read user input and store it in the variable letter

3 If islower(letter) is true:

4. Display "Uppercase equivalent: " followed by the uppercase of the letter

5 Else, if isupper(letter) is true:

6. Display "Lowercase equivalent: " followed by the lowercase of the letter

7 Else: Display "Invalid input. Please enter a letter."

8 End program
