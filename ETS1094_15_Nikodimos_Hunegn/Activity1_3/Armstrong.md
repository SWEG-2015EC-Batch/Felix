## Problem Analysis
    Input: Read a number from user
    Process: Finding each digit raised to the number of digits, adding them and then checking if it is the same as the original number
    Output: Display It is palindrom if the numbers are the same

## Pseudocode
    1. Read a number from user
    2. Initialize original_num by setting it to the input number
    3. While number > 0
      a. counter increases by 1
      b. number is set to number divided by 10
    4. Resetting num using original_num
    5. While number > 0
      a. Set current to number % 10
      b. add number raised to counter to armstrong
      c. set number to number / 10
    6. If armstrong is equal to original number
      a. Display it is palindrom
    7. Else
      a. Display it is not Palindrom

## Flowchart

```mermaid
graph TB
start(Start) --> userInput[/Read a number/]
userInput --> Original_Init[Original_num = num]
Original_Init --> Counting{"While num > 0"}
Counting -- True --> Digits[Counter++, num = num / 10]
Digits --> Counting
Counting -- False --> Resetting[Set num = original_num]
Resetting --> Adding{"While num > 0"}
Adding -- True --> AddingArmstrong[current = num % 10, armstrong += current ^ counter, num = num / 10]
AddingArmstrong --> Adding
Adding -- False --> IsArmstrong{"Armstrong == Original_num"}
IsArmstrong -- True --> Armstrong[/It is Armstrong/]
IsArmstrong -- False --> Not_Armstrong[/It is not Armstrong/]
Armstrong --> Final(End)
Not_Armstrong --> Final
