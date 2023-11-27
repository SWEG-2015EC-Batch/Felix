# Algorithm Design:

1 Input: Prompt the user to input the value of 'x'.

2 Read and store the value of 'x'.

3 Input: Prompt the user to input the value of 'y'.

4 Read and store the value of 'y'.

5 Calculate 'x' raised to the power of 'y' using the pow() function from the math library: result=x^y
 
6 Display the result of 'x' raised to the power of 'y' to the user.

# Problem Analysis:

Inputs: The program asks the user to input two values: 'x' and 'y'.

Processing: It calculates 'x' raised to the power of 'y' using the pow() function from the math library.

Output: The program displays the result of 'x' raised to the power of 'y' to the user.

# flowchart
```mermaid
graph TD;
A([Start]) --> B[/"Enter the value of x,
Enter the value of y"/];
B--> D["result = pow(x, y)"];
D--> E["'Display' x, 'raised to the power of ', y, 'is'  result"];
E--> F([End]);

