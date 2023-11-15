A) Problem Analysis
    1. Input: The user is prompted to enter the employee's name. The user is prompted to enter the weekly working hours. The user is prompted 
              to enter the bonus rate per hour. The user is prompted to enter the base salary.
    2. process: The program calculates the gross salary using the formula: grossSalary = baseSalary + (weeklyHours * bonusRate). The program
                calculates the pension as 5% of the gross salary: pension = 0.05 * grossSalary. The program calculates the tax as 15% of the gross salary: tax =
                0.15 * grossSalary. The program calculates the net salary as the difference between gross salary, pension, and tax: netSalary = grossSalary -
                pension - tax. The program calculates the bonus payment as the product of weekly hours and bonus rate: bonusPayment = weeklyHours * bonusRate.
    3. output: The program displays the employee's name, gross salary, net salary, and bonus payment.
B) Algorithm Design(Pseudo code)
    1. start
    2. Prompt user for input: "Enter employee name: "
    3. Read user input and store it in the variable employeeName
    4. Prompt user for input: "Enter weekly working hours: "
    5. Read user input and store it in the variable weeklyHours
    6. Prompt user for input: "Enter bonus rate per hour: "
    7. Read user input and store it in the variable bonusRate
    8. Prompt user for input: "Enter base salary: "
    9. Read user input and store it in the variable baseSalary
    10. Calculate grossSalary using the formula: grossSalary = baseSalary + (weeklyHours * bonusRate)
    11. Calculate pension as 5% of grossSalary: pension = 0.05 * grossSalary
    12. Calculate tax as 15% of grossSalary: tax = 0.15 * grossSalary
    13. Calculate netSalary as grossSalary - pension - tax
    14. Calculate bonusPayment as weeklyHours * bonusRate
    15. Display "\nEmployee Name: ", employeeName
    16. Display "Gross Salary: $", grossSalary
    17. Display "Net Salary: $", netSalary
    18. Display "Bonus Payment: $", bonusPayment
    19. End program
