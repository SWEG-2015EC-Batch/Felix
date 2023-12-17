# problem analaysis
input
- insert num

process
- divide num until we get the firstdigit
- last digit = num%10
- sum = first digit + last digit

 output
- sum 

# pseudo code:

1 Start:

2 Declare variables num, first_digit, last_digit, and digits_sum.

3 Input a number num from the user.

4 Calculate last_digit as num % 10 (remainder when divided by 10).

5 While num is greater than or equal to 10:
- Divide num by 10 (num = num / 10).
6 first_digit is now equal to num.

7 Calculate digits_sum as the sum of first_digit and last_digit.

8 Output the message showing the sum of the first and last digits.

9 End
