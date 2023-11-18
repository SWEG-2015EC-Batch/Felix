A.)Problem Analysis:
The problem is to develop a program that takes a single character input from the user and converts it to its uppercase and lowercase equivalents. The program should handle both scenarios where the user enters a valid letter and where they input a character that is not a letter.
  Input: The program expects the user to input a single character.
  Validation: It needs to validate whether the entered character is a letter or not. If the input is a letter, the program proceeds with the     
   conversion; otherwise, it prompts the user to input a valid letter.
  Conversion: If the input character is a letter, the program uses the toupper() and tolower() functions to convert the letter to its uppercase 
   and lowercase equivalents, respectively.
  Output: The program then displays the uppercase and lowercase equivalents of the entered character.
  Error Handling: The program needs to handle scenarios where the user inputs a character that is not a letter. In such cases, it should provide   
   an error message indicating that the user needs to input a valid letter.
  User Interaction: The program should have user-friendly prompts and messages to guide the user through the process of entering a character and 
   understanding the output.
  Program Termination: After displaying the uppercase and lowercase equivalents or an error message, the program should terminate.

B.)Algorithm Design:
  Step 1: Start
  Step 2: Declare variables inputChar and convertedChar as characters
  Step 3: Display "Enter a letter: "
  Step 4: Read inputChar from the user
  Step 5: Check if inputChar is an alphabet letter:
    If YES, proceed to Step 6
    If NO, display "Please enter a valid letter." and go to Step 10
  Step 6: Convert inputChar to uppercase using toupper() function and store the result in convertedChar
  Step 7: Display "Uppercase equivalent: " followed by convertedChar    Step 8: Convert inputChar to lowercase using tolower() function and store the result in convertedChar
  Step 9: Display "Lowercase equivalent: " followed by convertedChar
  Step 10: End

