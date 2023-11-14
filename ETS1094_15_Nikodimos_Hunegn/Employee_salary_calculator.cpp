#include <iostream>
#include <string> 

using namespace std;

int main() {
    
    string employee_name;
    double week_hours, bonus_rate, base_salary, bonus_payment, gross_salary, net_salary;
    const double pension_rate = 0.05, tax_rate = 0.15;
    
    cout<<"Enter employee's Full name: ";
    getline(cin,employee_name);
    cout<<"Enter the weekly working hours: ";
    cin>>week_hours;
    cout<<"Enter the base salary for this employee: ";
    cin>>base_salary;
    cout<<"Enter the bonus rate per hour: ";
    cin>>bonus_rate;
    
    bonus_payment = week_hours * bonus_rate;
    gross_salary = base_salary + bonus_payment;
    net_salary = gross_salary - (gross_salary * (pension_rate + tax_rate));
    
    cout << "\nEmployee's Name: " << employee_name << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Bonus Payment: " << bonus_payment << endl;
    cout << "Net Salary: " << net_salary << endl;
    
    return 0;
}
