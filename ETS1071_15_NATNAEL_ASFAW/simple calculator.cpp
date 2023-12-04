// C++ Program to Make a Simple Calculator
     #include <iostream>
     using namespace std;
      int main(){
           int num1, num2,status;
            char op;
            // Asking for input
        do {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter operator: +, -, *, /: ";
        cin >> op;

        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                } else {
                    cout << "Cannot divide by zero!";
                }
                break;
            default:
                cout << "Invalid Operator";
                break;
                }

            cout << "\nTo continue enter 1 or to terminate enter 0: ";
            cin >> status;
            } while (status != 0);

            return 0;
            }
