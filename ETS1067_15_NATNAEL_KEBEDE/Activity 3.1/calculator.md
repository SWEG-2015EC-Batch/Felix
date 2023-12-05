# Problem analysis

Input

- Two numbers you want to be calculate num1,num2

- The type of operator

Process

- Sign identification

- Arithmetic operation

Output

- Sum or difference or product or quotient

# pseudo code

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

# flowchart
```mermaid
graph TD;
A([Start])-->B[declaration];
B--> C[Do];
C--> D[/Enter num1,num2,operator/];
D--> E[Switch Operator];
E--> F{case'+'};
F-->|True|G[num1+num2];
F-->|False|H{case'-'};
H-->|True|I[num1-num2];
H--> |False|J{case'*'};
J--> |True|K[num1*num2];
J-->|False|L{case'/'};
L-->|True|M[num1/num2];
L-->|False|N{case'%'};
N-->|True|O[num1%num2];
N-->|False|P{Default};
P--> |True|Q[/You insert the wrong operator/];
Q-->E
G-->U[/Sum or product or difference or quotient or module/];
I-->U;
K-->U;
M-->U;
O-->U;
U-->R[/"Input insert (any number)"/];
R-->S{"While num!=0"};
S-->|True|C;
S--> |False|T([End]);

