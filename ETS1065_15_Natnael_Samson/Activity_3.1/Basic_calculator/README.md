**Problem Analysis**

Input:
- num_1 (integer): The first number entered by the user.
- num_2 (integer): The second number entered by the user.
- operate (character): The operator (+, -, *, /, r) selected by the user.
- status (integer): A flag to determine whether the user wants to continue or quit (0 to quit, any other number to continue).

Process:
1. Display a welcome message and instructions to the user.
2. Inside a do-while loop, prompt the user to enter two numbers (num_1 and num_2).
3. Prompt the user to enter the type of operation they want (operate).
4. Use a switch statement to perform the selected operation based on the value of operate.
   - If the user selects '+', add num_1 and num_2.
   - If the user selects '-', subtract num_1 from num_2.
   - If the user selects '*', multiply num_1 and num_2.
   - If the user selects '/', divide num_1 by num_2.
   - If the user selects 'r' or 'R', calculate the remainder when num_1 is divided by num_2.
   - If an unknown operator is entered, display an error message and go back to the label loop.
5. Display the result of the operation.
6. Ask the user if they want to continue (status).
   - If the user enters 0, exit the loop.
   - If the user enters any other number, continue the loop.
7. Continue the loop until the user decides to quit.

Output:
- Display the result of the arithmetic operation.
- Ask the user if they want to continue.

**Algorithm: Basic Calculator**

1. Display a welcome message and instructions to the user.
2. Initialize num_1, num_2, result, operate, and status variables.
3. Start a do-while loop:
   a. Prompt the user to enter the first number (num_1).
   b. Prompt the user to enter the second number (num_2).
   c. Label: Prompt the user to enter the type of operation (+, -, *, /) or (r for remainder).
   d. Switch on operate:
      - Case '+': result = num_1 + num_2.
      - Case '-': result = num_1 - num_2.
      - Case '*': result = num_1 * num_2.
      - Case '/': result = num_1 / num_2.
      - Case 'r' or 'R': result = num_1 % num_2.
      - Default: Display an error message and go to the label.
   e. Display the result of the operation.
   f. Ask the user if they want to continue (status).
      - If status is 0, exit the loop.
      - If status is any other number, continue the loop.
4. End the program.



