# problem Analysis
Input: any character from the keybord
process: check if the character is even digit, odd digit, vowel alphaber, consonant alphabet or special character
output: Type of the character
# Flow Chart
```mermaid
graph TD;
A([Start])--> B[/Prompt user to enter any character/];
B-->C{"check if the character is digit using isdigit()"};
C-->|true|D{"check if the digit is even using num%2=0 "};
D-->|true|E[/display your input is even digit/];
D-->|false|F[/display your input is odd digit/];
C-->|false|G{"check if the character is alphabet using isalpha()"};
G-->|true|H{check if the alphabet is uppercase};
H-->|true|I{check if the alphabet is vowel};
I-->J[/display your input is a vowel alphabet in uppercase /];
I-->|false|K[/display your input is a consonant alphabet in uppercase /];
H-->|false|L{check if the alphabet is vowel};
L-->|true|M[/display your input is a vowel alphabet in lowercase /];
L-->|false|N[/display your input is a consonant alphabet in lowercase /];
G-->|false|O[/display your input is a special character /];
O-->P([END]);
K-->P;
J-->P;
N-->P;
M-->P;
E-->P;
F-->P;
```
# Pseudo code


