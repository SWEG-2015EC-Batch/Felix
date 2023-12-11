## Problem Analysis
    Input: Read a number from the user
    Process: Calculating the factorial for each digit, adding them, checking if they match with the original
    Output: Display It is a strong number if they match

## Pseudocode
    1. Read a number from the user
    2. set original_num to number
    3. While number > 0
      a. set current to number % 10
      b. add factorial of number to sum
      c. set number to number / 10
    4. if sum is equal to original_num
      a. Display it is a strong Number
    5. Else
      a. Display it is not a strong number

  ## Flowchart

  ```mermaid

graph TB
Start(Start) --> UserInput[/Read a number/]
UserInput --> Original[Original_num = number]
Original --> Operation{"While number > 0"}
Operation -- True --> Inner["Current = number % 10, sum += Factorial(current), number = number / 10"]
Inner --> Operation
Operation -- False --> IsStrong{"Sum == original_num"}
IsStrong -- True --> Strong[/Display Is is strong/]
IsStrong -- False --> Not_Strong[/Display Is is not strong/]
Strong --> Final(End)
Not_Strong --> Final

Facorial(Factorial) --> Forloop{"For n = 1 to number"}
Forloop -- True --> Fact[Fact * 1]
Fact --> Forloop
Forloop -- False --> Return[return Fact]
    
