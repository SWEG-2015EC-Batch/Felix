## Problem Analysis:
    Input: A number
    Process: Counting the number of digits using iteration
    Output: The number of digits

## Pseudocode
    1. Get a number from the user;
    2. While (number is not 0)
      a. Do Divide the number by 10 and
      b. increase our counter by 1
    3. end while
    4. display the number of digits using our counter

## Flowchart

```mermaid

graph TB
  start(start) --> get_num[/Read a number from the user/]
  get_num --> While_operation{"while num != 0"}
  While_operation -- True --> Internal_Operation[Divide num by 10 and increase counter by 1]
  Internal_Operation --> While_operation
  While_operation -- False -->  Show_result[/The number of digits is: counter/]
  Show_result --> Final(End)
```
