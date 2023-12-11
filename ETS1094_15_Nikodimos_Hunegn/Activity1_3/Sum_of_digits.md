## Problem Analysis
    Input: Read a number
    Process: Add its digits using iteration
    Output: The sum of digits

## Flowchart
    1. Read the number from a user
    2. Assign sum as 0
    3. While the number is greater than 0
      a. set current number to number % 10
      b. add current number to sum
      c. set number to number / 10
    4. Display the sum of digits

## Pseudocode

```mermaid
graph TB
Start(Start) --> GetNum[/Get a number from the user/]
GetNum --> SumInit[Initialize sum as 0]
SumInit --> PossibleNum{"While number > 0"}
PossibleNum -- True --> WhileOperations["Current = num % 10, sum = sum + num, num = num / 10"]
WhileOperations --> PossibleNum
PossibleNum -- False --> result[/Display result/]
result --> Final(End)
