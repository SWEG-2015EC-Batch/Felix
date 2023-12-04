# Problem Analysis
Input: operand and operator
process: check if the operator is valid
         Performing sum or multiplication or division or subtraction or module according to the operator
Output: 
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
Q-->R[/"Input num (any number)"/];
R-->S{"While num!=0"};
