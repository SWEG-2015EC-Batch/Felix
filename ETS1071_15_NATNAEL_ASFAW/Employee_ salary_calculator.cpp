#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double weeklyHoursWorked, bonusRatePerHour, baseSalary, pensionRate = 0.05, taxRate = 0.15;
    double grossSalary, pensionAmount, taxAmount, netSalary, bonusPayment;

    // Input employee details
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter weekly hours worked: ";
    cin >> weeklyHoursWorked;

    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Calculate gross salary
    grossSalary = baseSalary + (weeklyHoursWorked * bonusRatePerHour);

    // Calculate pension amount
    pensionAmount = pensionRate * grossSalary;

    // Calculate tax amount
    taxAmount = taxRate * grossSalary;

    // Calculate net salary
    netSalary = grossSalary - (pensionAmount + taxAmount);

    // Calculate bonus payment
    bonusPayment = grossSalary - baseSalary;

    // Display employee details
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;

    return 0;
}
