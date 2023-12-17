## Problem Analysis
    Input: Read a number from the user
    Process: Identify the first and last digits and add them
    Output: Display the first and last digit, and the sum

## Pseudocode
  1. Start
  2. Read number from the user
  3. Assign original number as the user inputed number
  4. While number is not 0
     a. number will be divided by 10
     b. counter will increase by 1
  5. For i from 1 to counter
     a. Assign tempory number as original number % 10
     b. If i and counter are the same
       I. Set the first digit to temporary number
     c. Else if i is equal to 1
       I. Set the last digit to temporary number
     d. Set original number to be number divided by 10
  6. Add first and last digit and set it as sum
  7. Display the first digit, last digit and their sum
  8. End

## Flowchart
```mermaid
graph TB
start(Start) --> Userinput[/Read the number from user/]
Userinput --> Original["Original number = number"]
Original --> CounterCond{"While number != 0"}
CounterCond -- True --> Reducenum["number /= 10"]
Reducenum --> IncreaseCount["counter++"]
IncreaseCount --> CounterCond
CounterCond -- False --> ReversingCon{" 1 <= i <= counter"}
ReversingCon -- True --> AssignTemp[temporary = org_number % 10]
AssignTemp --> FirstDigit{"i == counter"}
FirstDigit -- True --> AssignFirst["First digit = temporary"]
AssignFirst --> ReduceOrg["org_number = org_number / 10"]
FirstDigit -- False --> LastDigit{"i == 1"}
LastDigit -- True --> AssignLast["Last digit = temporary"]
AssignLast --> ReduceOrg
ReduceOrg --> ReversingCon
ReversingCon -- False --> Adding[first + last]
Adding --> Displaying[/Display first digit, last digit and the sum/]
Displaying --> Final(End)
