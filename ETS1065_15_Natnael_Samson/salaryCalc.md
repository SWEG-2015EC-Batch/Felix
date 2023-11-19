This program calculates an employee's gross salary, net salary, and bonus payment

                                      Analysis
Input:
The user is prompted to enter the employee's name.
The user is prompted to enter the weekly working hours.
The user is prompted to enter the bonus rate per hour.
The user is prompted to enter the base salary.

Process:
The program calculates the gross salary using the formula: grossSalary = baseSalary + (weeklyHours * bonusRate).
The program calculates the pension as 5% of the gross salary: pension = 0.05 * grossSalary.
The program calculates the tax as 15% of the gross salary: tax = 0.15 * grossSalary.
The program calculates the net salary as the difference between gross salary, pension, and tax: netSalary = grossSalary - pension - tax.
The program calculates the bonus payment as the product of weekly hours and bonus rate: bonusPayment = weeklyHours * bonusRate.

Output:
The program displays the employee's name, gross salary, net salary, and bonus payment.

                                      Algorithm Design (pseudocode)
1. Prompt user for input: "Enter employee name: "
2. Read user input and store it in the variable employeeName
3. Prompt user for input: "Enter weekly working hours: "
4. Read user input and store it in the variable weeklyHours
5. Prompt user for input: "Enter bonus rate per hour: "
6. Read user input and store it in the variable bonusRate
7. Prompt user for input: "Enter base salary: "
8. Read user input and store it in the variable baseSalary
9. Calculate grossSalary using the formula: grossSalary = baseSalary + (weeklyHours * bonusRate)
10. Calculate pension as 5% of grossSalary: pension = 0.05 * grossSalary
11. Calculate tax as 15% of grossSalary: tax = 0.15 * grossSalary
12. Calculate netSalary as grossSalary - pension - tax
13. Calculate bonusPayment as weeklyHours * bonusRate
14. Display "\nEmployee Name: ", employeeName
15. Display "Gross Salary: $", grossSalary
16. Display "Net Salary: $", netSalary
17. Display "Bonus Payment: $", bonusPayment
18. End program
                                      flowchart
    ```mermaid
    flowchart TD;
  A([Start]) --> B["Print 'Enter employee name: '"];
  B -->|Input| C("employeeName");
  C --> D["Print 'Enter weekly working hours: '"];
  D -->|Input| E("weeklyHours");
  E --> F["Print 'Enter bonus rate per hour: '"];
  F -->|Input| G("bonusRate");
  G --> H["Print 'Enter base salary: '"];
  H -->|Input| I("baseSalary");
  I --> J["Calculate grossSalary = baseSalary + (weeklyHours * bonusRate)"];
  J --> K["Calculate pension = 0.05 * grossSalary"];
  K --> L["Calculate tax = 0.15 * grossSalary"];
  L --> M["Calculate netSalary = grossSalary - pension - tax"];
  M --> N["Calculate bonusPayment = weeklyHours * bonusRate"];
  N --> O["Print '\nEmployee Name: ' + employeeName"];
  O --> P["Print 'Gross Salary: $' + grossSalary"];
  P --> Q["Print 'Net Salary: $' + netSalary"];
  Q --> R["Print 'Bonus Payment: $' + bonusPayment"];
  R --> S([End]);
```                     
