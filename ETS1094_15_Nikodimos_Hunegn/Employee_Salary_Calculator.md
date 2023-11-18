## Employee Salary Calculator

#### Problem Analysis

The program computes the gross and net salary for an employee based on user-provided inputs, including the employee's full name, weekly working hours, base salary, and bonus rate. It calculates the bonus payment by multiplying the weekly working hours with the bonus rate, determines the gross salary by adding the base salary and bonus payment, and calculates the net salary after deducting fixed rates for pension and tax. The program then displays the employee's name, gross salary, bonus payment, and net salary. Constants are utilized for the pension and tax rates, providing a structured approach to salary calculation.

#### Algorithm

    1. Start
    2. Declare variables: employee_name (string), week_hours (double), bonus_rate (double), base_salary (double), bonus_payment (double), gross_salary (double), net_salary (double)
    3. Declare constants: pension_rate (0.05), tax_rate (0.15)
    4. Display "Enter employee's Full name: "
    5. Read 'employee_name' using getline
    6. Display "Enter the weekly working hours: "
    7. Read 'week_hours'
    8. Display "Enter the base salary for this employee: "
    9. Read 'base_salary'
    10. Display "Enter the bonus rate per hour: "
    11. Read 'bonus_rate'
    12. Calculate 'bonus_payment' as 'week_hours * bonus_rate'
    13. Calculate 'gross_salary' as 'base_salary + bonus_payment'
    14. Calculate 'net_salary' as 'gross_salary - (gross_salary * (pension_rate + tax_rate))'
    15. Display "Employee's Name: ", 'employee_name'
    16. Display "Gross Salary: ", 'gross_salary'
    17. Display "Bonus Payment: ", 'bonus_payment'
    18. Display "Net Salary: ", 'net_salary'
    19. End

#### FlowChart

```mermaid
  graph TD;
A([Start]) --> B[/"Receive employee's Full Name: "/];
B --> C[/"Enter weekly working hours, base salary, bonus rate per hour"/];
C --> D["Calculate bonus_payment, gross_salary,and net_salary"];
D --> E["Display Results"];
E --> F([End]);
