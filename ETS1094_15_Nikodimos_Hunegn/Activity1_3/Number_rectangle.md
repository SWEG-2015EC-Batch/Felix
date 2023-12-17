## Problem Analysis
    Input: Reading the starting number, rows and columns
    Process: Using loop to form the pattern of rectangle of numbers from rows and columns
    Output: Display the pattern

## Pseudocode
    1. Start
    2. Read starting number, rows, and columns
    3. For i between 1 and row inclusive
      a. For j between 1 and column inclusive
        I. Display starting number
        II. Starting number increase by 1
      b. Goto new line
    4. End

## Flowchart
```mermaid
graph TB

start(Start) --> UserInput[/Read starting number, rows and columns/]
UserInput --> row{"1 <= i <= row"}
row -- True --> col{"1 <= j <= column"}
col -- True --> Starting[/Display starting number/]
Starting --> Increase[Starting number++]
Increase --> col
col -- False --> Newline[Goto to new line]
Newline --> row
row -- False --> Final(End)
