# include <iostream>
using namespace std;
int main(){
    cout<<"======================================Income Calculator========================="<<endl;
   double gross_salary = 0;
   cout<<"Enter your gross Salary: ";
   cin>>gross_salary;
   double workedHours = 0;
   cout<<"Enter your worked Hours: ";
   cin>>workedHours;
   double overTimeBonusRate = 0;
   double incomeTaxRate = 0;
   if(gross_salary>=0 && gross_salary <= 200){
       incomeTaxRate = 0;
   }else if(gross_salary>200 && gross_salary <=600){
       incomeTaxRate = 0.1;
   }else if(gross_salary>600 && gross_salary <=1200){
       incomeTaxRate = 0.15;
   }else if(gross_salary>1200 && gross_salary <=2000){
       incomeTaxRate = 0.2;
   }else if(gross_salary>2000 && gross_salary <=3500){
       incomeTaxRate = 0.25;
   }else if(gross_salary>3500){
       incomeTaxRate = 0.3;
   }
   const float pension = gross_salary * 0.07;
   double incomeTax = gross_salary * incomeTaxRate;
   double overTimePayment = 0;

   if(workedHours > 40){
      cout<<"Enter your Over Time Bonus Rate/hour: ";
      cin>>overTimeBonusRate;
      double overTimeWorkedHours = workedHours - 40;
      overTimePayment = overTimeWorkedHours * overTimeBonusRate;
   }

   double netSalary = gross_salary - pension -incomeTax + overTimePayment;
   cout << "Your Net Salary is: "<<netSalary<<endl;
   cout<<"==================================================================================="<<endl;
   return 0;
}
