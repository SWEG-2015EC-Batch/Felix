# Problem Analysis:

Inputs: The program collects four inputs: employee name, weekly working hours, bonus rate per hour, and base salary.

Processing: It calculates the gross salary, pension deduction (5% of gross salary), tax deduction (15% of gross salary), net salary, and bonus payment based on the provided inputs and formulas.

Output: The program displays the employee's name, gross salary, net salary, and bonus payment.

# Algorithm Design:

1 Input: Prompt the user to enter the employee's name.

2 Read and store the employee's name.

3 Input: Prompt the user to enter the weekly working hours of the employee.

4 Read and store the weekly working hours.

5 Input: Prompt the user to enter the bonus rate per hour.

6 Read and store the bonus rate per hour.

7 Input: Prompt the user to enter the base salary of the employee.

8 Read and store the base salary.

9 Calculate the gross salary using the formula: Gross Salary=Base Salary+(Weekly Hours×Bonus Rate)

10 Calculate the pension deduction as 5% of the gross salary.

11 Calculate the tax deduction as 15% of the gross salary.

12 Calculate the net salary using the formula: Net Salary=Gross Salary−Pension−Tax

13 Calculate the bonus payment using the formula: Bonus Payment=Weekly Hours×Bonus Rate

14 Display the employee's name, gross salary, net salary, and bonus payment to the user

# flowchart
```mermaid
graph TD;
A([Start]) --> B[/"Enter employee name:
Enter weekly working hours:
Enter bonus rate per hour:
Enter base salary:"/];
B--> C["Calculate  grossSalary = baseSalary + (weeklyHours * bonusRate),
Calculate pension = 0.05 * grossSalary,
Calculate tax = 0.15 * grossSalary,
Calculate  netSalary = grossSalary - pension - tax,
Calculate bonusPayment = weeklyHours * bonusRate"];
C--> D[/"Display 'Employee Name: ', employeeName
 Display 'Gross Salary: $', grossSalary
 Display 'Net Salary: $', netSalary
 Display 'Bonus Payment: $', bonusPayment"/]




