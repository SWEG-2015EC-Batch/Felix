## Problem Analysis
    Input: Read a number from the user
    Process: Finding the proper divisors and adding them then checking if the sum matches the original number
    Output: Display It is perfect if they match

## Pseudocode
    1. Start
    2. Read a number from the user
    3. Intialize sum as 0
    4. For i from 1 to number - 1
      a. If number % i is 0
        i. add i to sum
    5. If sum is equal to number
      a. Display the number is perfect
    6. Else
      b. Display the number is not perfect
    7. End

## Flowchart

```mermaid
graph TB

Start(Start) --> UserInput[/Read number from user/]
UserInput --> SumInit[Initialize sum as 0]
SumInit --> forLoop{i from 1 to number -1}
forLoop -- True --> Divisor{"number % i == 0"}
Divisor --> True --> SumAdding[sum += i]
SumAdding --> forLoop
forLoop -- False --> PerfectCheck{Sum == number}
PerfectCheck -- True --> Perfect[/It is Perfect/]
PerfectCheck -- False --> Not_Perfect[/It is not Perfect/]
Perfect --> Final(End)
Not_Perfect --> Final(End)
