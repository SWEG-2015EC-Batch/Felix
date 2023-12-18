## Problem analysis
    Input: Get the number of rows from the user
    Process: Have stars less than or equal to row for each row starting from row number and going to 1
    Output: Display the pattern

## Pseudocode
    1. Start
    2. Read the number of rows from the user
    3. For i from row to zero both inclusive and decreasing
        a. For j from 1 to i both inclusive
          i. Display * and space
        b. Goto new line
    4. End
## Flowchart
```mermaid
graph TB
start(Start) --> UserInput[/Read number of rows/]
UserInput --> icond{"row >= i >= 0"}
icond -- True --> jcond{"1 <= j <= i"}
jcond -- True --> star[/"Print * and space"/]
star -- Try next number --> jcond
jcond -- False --> newline[Go to new line]
newline -- Try previous number --> icond
icond -- False --> final(End)
