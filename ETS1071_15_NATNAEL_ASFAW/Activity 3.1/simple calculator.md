**Problem analysis**

**Input**

Two numbers you want to be calculate num1,num2

The type of operator

**Process**

Sign identification

Arithmetic operation

**Output**

Sum or difference or product or quotient

**Pseudocode:**
1. Start
2. Display "Enter the operation space separated (a + b or a - b): "
3. Read 'num1', 'sign', 'num2' from the user
4. Switch 'sign'
    1. Case '+': set 'result' to 'num1 + num2'
    2. Case '-': set 'result' to 'num1 - num2'
    3. Case '*': set 'result' to 'num1 * num2'
    4. Case '/': set 'result' to 'num1 / num2'
    5. Case '%': set 'result' to 'num1 % num2'
    6. Default: display "wrong sign please input +,-,*,%, or /"
5. Display 'num1', 'sign', 'num2', "=", 'result'
6. Display "Please enter 0 to terminate the program or 1 to continue: "
7. Read 'status' from the user
8. If 'status' is not equal to 0, go back to step 2
9. End

    **flowchart**
```mermaid
   flowchart TD;
A([Start]) --> B[/Enter your weight in kilograms/];
B --> C[/Enter your height in meters/];
C --> D["BMI = body_weight / (height * height)"];
D --> E[/Print 'Your BMI is' BMI/];
E --> F([End]);
```
