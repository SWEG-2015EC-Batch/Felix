//This program is used to calculate an employees salary
#include <iostream>
using namespace std;
int main(){
    const float pension {0.07};
    double net_pay {0};
    double overtime {0};
    cout <<"              salary calculator" << endl;
    cout <<"=================================================" << endl;
    cout <<"\nPlease enter your gross salary: ";
    double gross_salary {0};
    cin >> gross_salary;
    float tax_rate {0};
    if (gross_salary < 200){
        tax_rate = 0;
    }else if (gross_salary >= 200 && gross_salary < 600){
        tax_rate = 0.1;
    }else if (gross_salary >= 600 && gross_salary < 1200){
        tax_rate = 0.15;
    }else if (gross_salary >=1200 && gross_salary < 2000){
        tax_rate = 0.2;
    }else if (gross_salary >= 2000 && gross_salary < 3500){
        tax_rate = 0.25;
    }else{
        tax_rate = 0.3;
    }
    cout <<"Please enter the worked hours: ";
    int worked_hours {0};
    cin >> worked_hours;
    if (worked_hours > 40) {
        cout <<"Please enter pay rate for overtime: ";
        float rate_per_hour {0};
        cin >> rate_per_hour;
        overtime=(rate_per_hour * (worked_hours-40));
        net_pay=((gross_salary - (pension*gross_salary)-((gross_salary + overtime) * tax_rate) + overtime));
        cout <<"Your net salary is " << net_pay <<" birr. \nThank you for using this program";
    }else {
        net_pay=(gross_salary - (pension*gross_salary)-(gross_salary*tax_rate));
        cout <<"Your net salary is " << net_pay <<" birr. \nThank you for using this program";
    }
    return 0;
}
