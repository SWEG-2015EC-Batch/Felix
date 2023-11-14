I. BMI Calculator

A. Problem Analysis
This program aims to calculate the Body Mass Index (BMI) based on user-provided values for height and weight. The program begins by prompting the user to input their height in centimeters and weight in kilograms. It then converts the height from centimeters to meters using the conversion factor of 1 meter equals 100 centimeters. The BMI is calculated using the formula BMI = weight / (height * height), where height is in meters. The resulting BMI is displayed to the user.
  
B. Algorithm
    1. Start
    2. Display "Enter Height in Centimeters (height): "
    3. Read 'height' from the user
    4. Display "Enter Weight in Kilograms (weight): "
    5. Read 'weight' from the user
    6. Set 'h_in_m' to 'height / 100'
    7. Set 'BMI' to 'weight / (h_in_m * h_in_m)'
    8. Display "Your BMI is: BMI"
    9. End


II. Case Converter

A. Problem Analysis

This program takes a single letter as user input and determines whether it is in uppercase or lowercase. Depending on the case, it then converts the letter to its counterpart and displays the result. The program utilizes the <cctype> header for the islower() and isupper() functions to check the case of the letter and toupper () and tolower() functions for case conversion. The output messages clearly inform the user about the case conversion result, and an "Invalid input" message is displayed if the entered character is not a letter.

B. Algorithm
     1. Start
     2. Display "Enter a letter: "
     3. Read 'letter' from the user
     4. Check if 'letter' is in lowercase using islower():
         a. If true, convert 'letter' to uppercase using toupper()
           i. Display "The uppercase for 'letter' is 'convertedLetter'"
     5. Check if 'letter' is in uppercase using isupper():
         b. If true, convert 'letter' to lowercase using tolower()
           i. Display "The lowercase for 'letter' is 'convertedLetter'"
     6. If 'letter' is neither lowercase nor uppercase:
         a. Display "Invalid input"
     7. End


III. Employee Salary Calculator

A. Problem Analysis

The program computes the gross and net salary for an employee based on user-provided inputs, including the employee's full name, weekly working hours, base salary, and bonus rate. It calculates the bonus payment by multiplying the weekly working hours with the bonus rate, determines the gross salary by adding the base salary and bonus payment, and calculates the net salary after deducting fixed rates for pension and tax. The program then displays the employee's name, gross salary, bonus payment, and net salary. Constants are utilized for the pension and tax rates, providing a structured approach to salary calculation.

B. Algorithm
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
    15. Display "\nEmployee's Name: ", 'employee_name'
    16. Display "Gross Salary: ", 'gross_salary'
    17. Display "Bonus Payment: ", 'bonus_payment'
    18. Display "Net Salary: ", 'net_salary'
    19. End

IV. Number of Miles without refueling

A. Problem Analysis

This program aims to calculate and display the distance an automobile can travel without refueling based on user-provided inputs, including the fuel tank capacity in gallons and the number of miles the automobile can travel per gallon of fuel. The program prompts the user to enter these values, performs a simple multiplication to calculate the total distance, and then outputs the result.

B. Algorithm
    1. Start
    2. Declare variables: capacity (float), miles_per_gallon (float), distance (float)
    3. Display "Enter the capacity in gallons of the fuel tank: "
    4. Read 'capacity' from the user
    5. Display "Enter the number of miles the automobile can be driven per gallon of fuel: "
    6. Read 'miles_per_gallon' from the user
    7. Calculate 'distance' as 'capacity * miles_per_gallon'
    8. Display "Your automobile can be driven ", 'distance', " miles without refueling"
    9. End

V. Time to send a file

A. Problem Analysis

This program calculates the time required to transmit a file based on the size of the data in megabytes (MB). The program prompts the user to input the size of the data in megabytes, converts it to bytes, and then calculates the transmission time in seconds. The program uses a while loop to handle the conversion of seconds into days, hours, and minutes, concatenating the result into a string. The final output includes the formatted time in days, hours, minutes, and seconds required to transmit the file.

B. Algorithm
    1. Start
    2. Declare variables: size_in_mb (float), size_in_bytes (float), trans_time_in_seconds (int), result (string)
    3. Display "Enter the size of the data in MegaBytes(MB): "
    4. Read 'size_in_mb' from the user
    5. Calculate 'size_in_bytes' as 'size_in_mb * 1048576'
    6. Calculate 'trans_time_in_seconds' as 'size_in_bytes / 960'
    7. While 'trans_time_in_seconds' is greater than or equal to 60:
       a. If 'trans_time_in_seconds' is greater than or equal to 86400:
          i. Append 'trans_time_in_seconds / 86400' days to 'result'
          ii. Set 'trans_time_in_seconds' to 'trans_time_in_seconds % 86400'
       b. Else, if 'trans_time_in_seconds' is greater than or equal to 3600:
          i. Append 'trans_time_in_seconds / 3600' hours to 'result'
          ii. Set 'trans_time_in_seconds' to 'trans_time_in_seconds % 3600'
       c. Else:
          i. Append 'trans_time_in_seconds / 60' minutes to 'result'
          ii. Set 'trans_time_in_seconds' to 'trans_time_in_seconds % 60'
    8. Display "It takes ", 'result', " and ", 'trans_time_in_seconds', " seconds to send this file"
    9. End

VI. X the power of Y calculator

A. Problem Analysis

This program calculates the result of raising a given base to a specified power. The user is prompted to input the base and power, and the program utilizes the pow() function from the <cmath> header to perform the exponentiation. The result is then displayed to the user. The program is concise and provides a quick means of computing exponentiation for arbitrary input values.

B. Algorithm
    1. Start
    2. Declare variables: base (float), power (float), result (float)
    3. Display "Enter the base: "
    4. Read 'base' from the user
    5. Display "Enter the power: "
    6. Read 'power' from the user
    7. Calculate 'result' as 'pow(base, power)'
    8. Display 'base', " raised to the power of ", 'power', " is ", 'result'
    9. End





