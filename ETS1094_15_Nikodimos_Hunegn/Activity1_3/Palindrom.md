## Problem Analysis
    Input: A number from user
    Process: reverse the number and check if it is the same as the original
    Output: Palindrom if they are the same

## Pseudocode
    1. Read a number from the user
    2. Intialize a string called reversed as the number
    3. Reverse the reversed
    4. If num matches the reversed
      a. It is Palindrom
    5. Else
      a. It is not Palindrom

## Flowchart

```mermaid
graph TB
Start(Start) --> UserInput[/Read number from user/]
UserInput --> reverse_Init[Initialize reversed as number]
reverse_Init --> Reversing[Reverse the number]
Reversing --> CheckingPalindrom{"Number == reversed"}
CheckingPalindrom -- True --> Palindrom[/Number is Palindrom/]
CheckingPalindrom -- False --> Not_Palindrom[/Number is not Palindrom/]
Palindrom --> Final(End)
Not_Palindrom --> Final
