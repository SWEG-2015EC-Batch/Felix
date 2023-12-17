## Problem Analysis
    Input: A number from user
    Process: reverse the number and check if it is the same as the original
    Output: Palindrom if they are the same

## Pseudocode
    1. Read a number from the user
    2. Intialize copynum as the num
    3. while num > 0
       set temp = num % 10
       set reverse = (reverse*10) + temp
       set num = num/10
    5 display revrese   
    4. If copynum matches the reversed
      a. It is Palindrom
    5. Else
      a. It is not Palindrom

## Flowchart

```mermaid
flowchart TD;
A([start])-->b[/read num/];
b-->c[/intialize copynum = num/];
c-->d{while num > 0};
d-->|true|e[temp = num%10, reverse = reverse*10 + 10 , num = num/10];
e-->d
d-->|false|h[/display reverse/];
h-->i{if copynum = reverse};
i-->|true|j[/it is palindrome/];
i-->|false|k[/it is not palindrome/];
j-->l([end])
k-->l([end])







 
