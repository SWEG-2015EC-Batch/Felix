//Salary Calculator Program
// This program calculates an employee's gross salary, net salary, and bonus payment
// based on weekly working hours, bonus rate per hour, and base salary.
// User inputs are taken for employee information, and the results are displayed.
#include <iostream>
using namespace std;
int main() {
 string employeeName;
 double weeklyHours, bonusRate, baseSalary;
    cout << "Enter employee name: ";
 cin >> employeeName;
    cout << "Enter weekly working hours: ";
 cin >> weeklyHours;
    cout << "Enter bonus rate per hour: ";
 cin >> bonusRate;
    cout << "Enter base salary: ";
 cin >> baseSalary;
    double grossSalary = baseSalary + (weeklyHours * bonusRate);
 double pension = 0.05 * grossSalary;
 double tax = 0.15 * grossSalary;
 double netSalary = grossSalary - pension - tax;
 double bonusPayment = weeklyHours * bonusRate;
 cout << "\nEmployee Name: " << employeeName << endl;
 cout << "Gross Salary: $" << grossSalary << endl;
 cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    return 0;
}
