# pseudo code
1. Input num
2. reverse = 0
3. temp = 0
4. copynum = num
5. Output "Enter the number: "
6. Input num
7. copynum = num
8. While num > 0:
    9. temp = num % 10
    10. reverse = (reverse * 10) + temp
    11. num = num / 10
12. Output reverse
# flowchart
```mermaid
flowchart TD;
A([start])-->b[/read num/];
b-->c[/intialize copynum = num/];
c-->d{while num > 0};
d-->|true|e[temp = num%10, reverse = reverse*10 + 10 , num = num/10];
e-->d
d-->|false|h[/display reverse/];
h-->l([end])







 

