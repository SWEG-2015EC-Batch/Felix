#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;
int main(){
    cout<<setw(50)<<"=================================play with Numbers================================"<<endl;
    int num=0;
    cout <<"Enter a number:  " ;
    cin >> num;
    int copyNum= num ;
    int palindrome= num;
    int num1 = num;
    int reverse=0;
    int count=0;
    int sum = 0;
    int product = 1;
    int firstDigit = 0;
    int lastDigit = 0;
    int last = num%10;
    int excludeLastNum = num/10;
    int frequency = num;
    int strongNum = num;
    int originalNum = num;
    int perfectNum = num;
    int armstrongNum = num;
    int armstrongNum1 = num;

    while (num>0){
        count++;
        int temp = num%10;
        reverse = (reverse *10)+temp;       
        sum = sum + temp;
        if(temp%2==0){
        product = product*temp;
        }
         num/=10; 
    }

    firstDigit = reverse%10;
    lastDigit = last ;
    int sumFL = firstDigit + lastDigit;
    int firstSwapNum = lastDigit;
    while(copyNum >0){
         firstSwapNum *=10;
        copyNum/=10;
    }

    int excludeFirstNum = num1%(int(pow(10,count-1))) ;
    int betweenNum = excludeFirstNum/10;
    int swap =  (firstSwapNum/10) + (betweenNum*10) + firstDigit ;
    cout <<" A) The reverse number is: " << reverse<< endl;
    cout <<" B) and the count of the number of digits is: "<<count<<endl;
    cout<< " C) The sum of the digits of the given number in table format is: "<< sum <<endl;
    cout<< " D) The product of even digits of the a given number is: "<< product <<endl;
    cout<< " E) The first and the last digit of the number are: " << firstDigit <<" and "<< lastDigit<<" respectively and their sum is: "<<sumFL<< endl;
    cout<< " F) The Swap of the first and the last digit of the number is: "<<swap<<  endl;

   if(palindrome==reverse){
       cout<< " G) The number is palindrome because "<<palindrome<<" and "<<reverse<<" are the same."<< endl; 
    }else{
        cout<<" G) The number is not palindrome because "<<palindrome<<" and "<<reverse<<" are the not same."<< endl;
       }

    cout<< " H) The frequency of each digit in table format of the given integer is: "<<endl;
            int frequency0 = 0, frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0,
                frequency5 = 0, frequency6 = 0, frequency7 = 0, frequency8 = 0, frequency9 = 0;

            while (frequency > 0) {
                int digit = frequency % 10;

                // Update frequencies based on the digit
                if (digit == 0) frequency0++;
                else if (digit == 1) frequency1++;
                else if (digit == 2) frequency2++;
                else if (digit == 3) frequency3++;
                else if (digit == 4) frequency4++;
                else if (digit == 5) frequency5++;
                else if (digit == 6) frequency6++;
                else if (digit == 7) frequency7++;
                else if (digit == 8) frequency8++;
                else if (digit == 9) frequency9++;

                frequency /= 10;
            }

            // Display digit frequencies
            cout << "Digit\tFrequency" << endl;
            if (frequency0 > 0) cout << "0\t" << frequency0 << endl;
            if (frequency1 > 0) cout << "1\t" << frequency1 << endl;
            if (frequency2 > 0) cout << "2\t" << frequency2 << endl;
            if (frequency3 > 0) cout << "3\t" << frequency3 << endl;
            if (frequency4 > 0) cout << "4\t" << frequency4 << endl;
            if (frequency5 > 0) cout << "5\t" << frequency5 << endl;
            if (frequency6 > 0) cout << "6\t" << frequency6 << endl;
            if (frequency7 > 0) cout << "7\t" << frequency7 << endl;
            if (frequency8 > 0) cout << "8\t" << frequency8 << endl;
            if (frequency9 > 0) cout << "9\t" << frequency9 << endl;

    cout<< " I) The number is ";
            int numDigits = 0;
            while (armstrongNum > 0) {
                numDigits++;
                armstrongNum /= 10;
            }
            while (armstrongNum1 > 0) {
                sum += pow(armstrongNum1 % 10, numDigits);
                armstrongNum1 /= 10;
            }
            if (sum == originalNum) {
                cout << " an Armstrong number." << endl;
            } else {
                cout << "not an Armstrong number." << endl;
            }
    cout<< " J) The number is ";
            while (strongNum > 0) {
                int digit = strongNum % 10;
                int factorial = 1;
                for (int i = 1; i <= digit; i++) {
                    factorial *= i;
                }
                sum += factorial;
                strongNum /= 10;
            }
            if (sum == originalNum) {
                cout << "a Strong number." << endl;
            } else {
                cout << "not a Strong number." << endl;
            }



    cout<< " K) The number is ";
    for(int i = 1; i<= perfectNum/2; i++ ){
        if (num %i == 0){
            sum += i; 
        }
    }
    if(sum == perfectNum){
    cout << "a perfect number."<<endl;
    }else{
       cout << "not a perfect number."<<endl; 
    }

    cout<< setw(50)<<"===================================================================================" <<endl;
    return 0;
}
