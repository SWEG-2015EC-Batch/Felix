## Problem Analysis
    Input: No input from user
    Process: Have an array with a list of letters from a to e and iterate through them to draw the pattern
    Output: Display the pattern

## Pseudocode
    1. Start
    2. Initialize an array of letters from a to e
    3. For i between 1 and 5 inclusive
      a. For j between 1 and 5 inclusive
        I. Display the jth element from the array
      b. Goto new line
    4. End

## Flowchart

```mermaid
graph TB
start(Start) --> letters[Array from a to e]
letters --> row{"1 <= i <= 5"}
row -- True --> col{"1 <= j <= 5}
col --> True --> Display["Display letter[j]"]
Display --> col
col -- False --> newLine[Goto new line]
newLine --> row
row -- False --> Final(End)
```
