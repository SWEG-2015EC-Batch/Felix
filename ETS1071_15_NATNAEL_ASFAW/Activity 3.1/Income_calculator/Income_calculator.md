                    Analysis

Input:
The program prompts the user for the employee's gross salary, worked hours, and income tax rate. If overtime is applicable (worked hours exceed 40), it also asks for the overtime bonus rate.

Process:
1. Calculate pension and income tax:
   - Pension = Gross salary * 0.07

    - Income tax = Gross salary * Tax rate
3. Check if the employee worked hours exceed 40 hrs.
4. If yes, compute the bonus payment [optional]:

   - Overtime payment = (Worked hours - 40) * Bonus rate/hour
6. Compute Net-Pay of an employee:

   - Net Salary = (Gross Salary – Pension – Income Tax) + Overtime Payment

Output:
The program displays the net salary of the employee after considering deductions and optional overtime payment.

                Algorithm Design (Pseudocode)
1. Display "Salary Calculator" title
2. Display "=================================================" separator
3. Declare constants: pension = 0.07
4. Declare variables: net_pay = 0, overtime = 0, gross_salary = 0, tax_rate = 0, worked_hours = 0, rate_per_hour = 0
5. Prompt user for input: "Please enter your gross salary: "
6. Read user input and store it in the variable gross_salary
7. Determine tax_rate based on gross_salary:
   a. If gross_salary < 200, tax_rate = 0

   b. Else if 200 <= gross_salary < 600, tax_rate = 0.1

   c. Else if 600 <= gross_salary < 1200, tax_rate = 0.15

   d. Else if 1200 <= gross_salary < 2000, tax_rate = 0.2

   e. Else if 2000 <= gross_salary < 3500, tax_rate = 0.25

   f. Else, tax_rate = 0.3
9. Prompt user for input: "Please enter the worked hours: "
10. Read user input and store it in the variable worked_hours
11. If worked_hours > 40:
    a. Prompt user for input: "Please enter pay rate for overtime: "

    b. Read user input and store it in the variable rate_per_hour

    c. Calculate overtime = rate_per_hour * (worked_hours - 40)

    d. Calculate net_pay = (gross_salary - (pension * gross_salary) - ((gross_salary + overtime) * tax_rate) + overtime)
13. Else:

    a. Calculate net_pay = (gross_salary - (pension * gross_salary) - (gross_salary * tax_rate))
15. Display "Your net salary is " followed by net_pay and " birr. \nThank you for using this program"
16. End program

