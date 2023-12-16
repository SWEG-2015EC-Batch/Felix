**Algorithm: GradeCalculator**

1. Display a welcome message and instructions for the grade calculator.
2. Initialize variables: test, quiz, project, assignment, final, and total.
3. Use do-while loops to ensure valid inputs for each component:
   a. Prompt the user to enter test results out of 15, validate input.
   b. Prompt the user to enter quiz results out of 5, validate input.
   c. Prompt the user to enter project results out of 20, validate input.
   d. Prompt the user to enter assignment results out of 10, validate input.
   e. Prompt the user to enter final exam results out of 50, validate input.
4. Calculate the total as the sum of test, quiz, project, assignment, and final.
5. Use if-else statements to determine the letter grade based on the total:
   - If total is >= 90, display "Your grade is: A+".
   - Else if total is >= 80, display "Your grade is: A".
   - Else if total is >= 75, display "Your grade is: B+".
   - Else if total is >= 60, display "Your grade is: B".
   - Else if total is >= 55, display "Your grade is: C+".
   - Else if total is >= 45, display "Your grade is: C".
   - Else if total is >= 30, display "Your grade is: D".
   - Else, display "Your grade is: F".
6. Display a thank-you message for using the program.
7. End the program.

**Algorithm: GradeCalculator**

1. DisplayWelcomeMessage()

2. Initialize variables:
   - test, quiz, project, assignment, final, total

3. InputValidationLoop(score, maxScore):
   a. Prompt the user to enter the score for a component (e.g., test) out of the maximum possible score (e.g., 15).
   b. Read and validate the input using a do-while loop.
      i. If the input is invalid (greater than the maximum score), display an error message and repeat the input process.
   c. Return the validated score.

4. CalculateTotalScore():
   a. Call InputValidationLoop for each component (test, quiz, project, assignment, final) to get validated scores.
   b. Calculate the total as the sum of the validated scores.

5. DetermineGrade(total):
   a. Use if-else statements to determine the letter grade based on the total:
      i. If total is >= 90, display "Your grade is: A+".
      ii. Else if total is >= 80, display "Your grade is: A".
      iii. Else if total is >= 75, display "Your grade is: B+".
      iv. Else if total is >= 60, display "Your grade is: B".
      v. Else if total is >= 55, display "Your grade is: C+".
      vi. Else if total is >= 45, display "Your grade is: C".
      vii. Else if total is >= 30, display "Your grade is: D".
      viii. Else, display "Your grade is: F".

6. DisplayThankYouMessage()

7. End the program.



