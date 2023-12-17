# algorithm design
1 Start

2 Declare variables:

-number (input number)
-digit (to store individual digits)
-temp (temporary variable to hold the number)
-frequency[] (array to store the frequency of each digit, initialized to 0)
3 Prompt the user to enter a number.

4 Read the input number into the variable number.

5 Initialize temp to number.

6 Initialize all elements of the frequency[] array to 0.

7 While temp is not equal to 0:
a. Calculate digit as temp % 10 (to extract the last digit).
b. Increment the frequency of digit in the frequency[] array.
c. Update temp by dividing it by 10 (temp /= 10) to remove the last digit.

8 Print the header for the digit frequency table.

9 Print a separator line.

10 For i from 0 to 9:
a. If frequency[i] is greater than 0:
i. Display i as the digit and frequency[i] as its frequency.

11 End
