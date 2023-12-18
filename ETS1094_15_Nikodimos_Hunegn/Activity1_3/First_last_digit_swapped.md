## Problem Analysis
    Input: Read a number from the user
    Process: Swap the first and last digit of the number
    Output: Display the swapped number

## Pseudocode
    1. Start
    2. Initiate counter, swapped_number and inner as 0
    3. Read the number from the user
    4. Assign original number as the number
    5. while the number is not zero
      a. counter is increased by 1
      b. number equals number divided by 10
    6. For i from 1 to counter both inclusive
      a. Set Temporary number to original number modulo 10
      b. If i is 1, Set last number as temporary
      c. If i is equal to counter, Set first number to temporary
      d. Else
        I. Add temporary times 10 raised to inner to swapped_number
        II. inner increases by 1
      e. Set original number to original number divided by 10
    7. Add last number times 10 raised to counter minus 2 to swapped_number
    8. Add first plus 10 times swapped_number to swapped_number
    9. Display the swapped number
    9. End

  ## Flowchart
  ```mermaid
Graph TB
Start(Start) --> Initiation["Initiate counter, swapped_number and inner as 0"]
Initiation --> userInput[/Read number from the user/]
userInput --> Original[Org_num = number]
Original --> Whileloop{"while number != 0"}
Whileloop -- True --> Process["counter++, number /= 10"]
Process --> Whileloop
Whileloop -- False --> Forloop{"1 <= i <= counter"}
Forloop -- True --> Temporary["temp = org_num % 10"]
Temporary --> ifCond{"i == 1"}
ifCond -- True --> last["last number = temporary"]
ifCond -- False --> elifCond{"i == counter}
elifCond -- True --> first["first number = temporary"]
elifCond -- False --> unswapped["swapped_number = temp * round(pow(10,inner)), inner++"]
last --> reduceNum["number /= 10"]
first --> reduceNum
unswapped --> reduceNum
reduceNUm -- Try next number --> Forloop
Forloop -- False --> lastAdd["swapped_number += last number * round(pow(10, counter - 2))"]
lastAdd --> firstAdd["swapped_number = first + 10 * swapped_number"]
firstAdd --> swapped[/"Display swapped_number"/]
swapped --> Final(End)
