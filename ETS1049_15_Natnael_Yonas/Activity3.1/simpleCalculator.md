# Problem Analysis
Input: The number you want to calculate num1 and num2
       The type of operator
process: Sign Identification
         Arithmetic Operator
Output: Sum or product or difference or quotient or module
# Flowchart
```mermaid
graph TD;
A([Start])-->B[Incialization];
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
U-->R[/"Input num (any number)"/];
R-->S{"While num!=0"};
S-->|True|C;
S--> |False|T([End]);
