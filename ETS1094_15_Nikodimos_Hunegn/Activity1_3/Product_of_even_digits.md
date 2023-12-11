## Problem Analysis
    Input: Reading a number
    Process: Checking if each digit is even and multiply them
    Output: Product of the even integers

## Pseudocode

1. Get a number from the user
2. Set product to 1
3. While num > 0:
   a. Set current to num % 10
   b. If current is even:
        i. Multiply product by current
   c. Divide num by 10

4. If product > 1:
    a. Print "The product of even digits in the given number is: ", product
5. Else:
    a. Print "There is no even digit in the given number"

## Flowchart

```mermaid
graph TB
start(Start) --> num[/Get number from user/]
num --> productofnums[set product to 1]
productofnums --> Operation{"While Num > 0"}
Operation -- True --> CurrentNum[Set Current to num % 10]
CurrentNum --> IsEven{"Current is even"}
IsEven -- True --> Multiply[Multiply product by current]
IsEven -- False --> ReduceNum[Divide num by 10]
Multiply --> ReduceNum
ReduceNum --> Operation
Operation -- False --> CheckProduct{"Product > 1"}
CheckProduct -- True --> ProductEven[/Product of even digits is Product/]
CheckProduct -- False --> NoEven[/No even digit/]
ProductEven --> Final(End)
NoEven --> Final
