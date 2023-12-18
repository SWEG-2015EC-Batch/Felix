## Problem analysis
    Input: Get number of rows from user
    Process: Have stars on horizontal, vertical and diagonal positions
    Output: Display the pattern

## Pseudocode
    1. Start
    2. Read the number of rows from the user
    3. For i from row to 0 both inclusive decreasing
      a. For j from 1 to i both inclusive
        i. If i is equal to row or j is equal to one or i is equal to j
          1. Print a star with a blank space
        ii. Else
          1. Print two blank spaces
      b. Goto new line
    4. End
## Flowchart
```mermaid
graph TB
start(Start) --> UserInput[/Read number of rows/]
UserInput --> icond{"1 <= i <= row"}
icond -- True --> jcond{"1 <= j <= i"}
jcond -- True --> ifcond{"i == row || j == 1 || i == j"}
ifcond -- True --> star[/"Display * and space"/]
ifcond -- False --> blankspace[/Display two blank spaces/]
star -- Try next number --> jcond
blankspace -- Try next number --> jcond
jcond -- False --> newline[Goto new line]
newline -- Try next number --> icond
icond -- False --> final(End)
