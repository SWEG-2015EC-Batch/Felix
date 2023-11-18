# Problem Analysis
    1. input:Prompt the user to enter the value of x and  Y.
    2. process: Calculate the result of the expression x to the power of y using the pow() function from the library.
    3. output: Display the calculated result of the calculation, showing x raised to the power of y.
# Algorithm Design(Pseudo code)
    1. strat
    2. Prompt user for input: "Enter the value of x: "
    3. Read user input and store it in the variable x
    4. Prompt user for input: "Enter the value of y: "
    5. Read user input and store it in the variable y
    6. Calculate result using the formula: result = pow(x, y)
    7. Display x, " raised to the power of ", y, " is ", and the calculated result
    8. End program
# Flowchart
```mermaid
graph TD;
A([Start]) --> B[/Enter the value of x/];
B--> C[/Enter the value of y/];
C --> D["`result = pow(x, y)`"];
D--> E["`Display x, " raised to the power of ", y, " is " result`"];
E--> F([End]);
```
