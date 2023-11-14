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

Pseudocode:

Start

Declare inputChar, convertedChar as characters

Display "Enter a letter: "
Read inputChar

If inputChar is an alphabet letter Then
    convertedChar = Convert inputChar to uppercase using toupper() function
    Display "Uppercase equivalent: " + convertedChar
    
    convertedChar = Convert inputChar to lowercase using tolower() function
    Display "Lowercase equivalent: " + convertedChar
Else
    Display "Please enter a valid letter."
End If

End





