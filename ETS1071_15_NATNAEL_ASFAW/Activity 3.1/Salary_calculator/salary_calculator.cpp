#include <iostream>
using namespace std;

int main() {
    double grossSalary, workedHours, taxRate, pensionRate, overtimeRate;
    cout << "Enter gross salary: ";
    cin >> grossSalary;
    cout << "Enter worked hours: ";
    cin >> workedHours;
    cout << "Enter income tax rate: ";
    cin >> taxRate;
    cout << "Enter pension rate: ";
    cin >> pensionRate;

    double pension = grossSalary * (pensionRate / 100);
    double incomeTax = 0;
    double netSalary;

    if (grossSalary <= 200) {
        incomeTax = 0;
    } else if (grossSalary > 200 && grossSalary <= 600) {
        incomeTax = grossSalary * 0.1;
    } else if (grossSalary > 600 && grossSalary <= 1200) {
        incomeTax = grossSalary * 0.15;
    } else if (grossSalary > 1200 && grossSalary <= 2000) {
        incomeTax = grossSalary * 0.20;
    } else if (grossSalary > 2000 && grossSalary <= 3500) {
        incomeTax = grossSalary * 0.25;
    } else if (grossSalary > 3500) {
        incomeTax = grossSalary * 0.30;
    }

    if (workedHours > 40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtimeRate;
        double overtimePayment = (workedHours - 40) * overtimeRate;
        netSalary = grossSalary - pension - incomeTax + overtimePayment;
    } else {
        netSalary = grossSalary - pension - incomeTax;
    }

    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
