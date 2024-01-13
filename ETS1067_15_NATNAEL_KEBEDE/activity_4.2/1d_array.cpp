#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    cout<<"question number 1 intialize array elemnets"<<endl;
    signed int array[4][5]={16, 22, 99, 4, 18, -258, 4,101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16,3};
    
    cout<<"==============================================="<<endl;
    
    
    cout<<"question number 2 that display array elemnts and their average"<<endl; 
     int temp[8];
    double total = 0;
    double average;
    
    
    for (int  i = 0; i < 8; i++)
    {
        cout <<"Enter array elemnt"<<i+1<<":";
        cin>>temp[i];
        total += temp[i];
        
    }
  
   cout <<"average = "<< ((total/8))<<endl;
    cout<<"==============================================="<<endl;

    cout<<"question number 3 that add equivalent array elements of two matrices"<<endl;
    int ROWS,COLS;
   cout<<"enter the size of the array "<<endl;
   cout<<"enter number of rows: ";
   cin>>ROWS;
   cout<<"enter number of columns :";
   cin>>COLS;
    int first[ROWS][COLS], second[ROWS][COLS], result[ROWS][COLS];

    // Reading values for the first array
    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> first[i][j];
        }
    }

    // Reading values for the second array
    cout << "\nEnter elements for the second array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> second[i][j];
        }
    }

    // Adding equivalent elements and storing in result array
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    // Displaying the resulting table
    cout << "\nResulting data elements in table form:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    cout<<"==============================================="<<endl;

  
  
   cout<<"question number 4 that input array called\"volts\""<<endl;
    double volts[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    int size = sizeof(volts) / sizeof(volts[0]);

    cout << setw(10) << "Voltage" << setw(10) << "Voltage" << setw(10) << "Voltage" << endl;
    cout << setw(10) << "--------" << setw(10) << "--------" << setw(10) << "--------" << endl;

    for (int i = 0; i < size; i++) {
        cout << fixed << setw(10) << setprecision(2) << volts[i];

        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    cout<<"==============================================="<<endl;
    cout<<"question number 5 that read total mark of a students and print the score level"<<endl;
    int totalMarks[50];
    int scoreStatus[50];
    int i, n;

    cout << "Enter the total number of students: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Enter the total marks of student " << i+1 << ": ";
        cin >> totalMarks[i];

        if(totalMarks[i] >= 80) {
            scoreStatus[i] = 1;
        } else if(totalMarks[i] >= 60) {
            scoreStatus[i] = 2;
        } else if(totalMarks[i] >= 50) {
            scoreStatus[i] = 3;
        } else if(totalMarks[i] >= 40) {
            scoreStatus[i] = 4;
        } else {
            scoreStatus[i] = 5;
        }
    }

    cout << "\n\nStudent Marks Report: " << endl;
    cout << "--------------------------------------" << endl;
    cout << "Total Marks\tScore Status" << endl;
    cout << "--------------------------------------" << endl;

    for(i = 0; i < n; i++) {
        cout << totalMarks[i] << "\t\t";

        switch(scoreStatus[i]) {
            case 1: cout << "Excellent"; break;
            case 2: cout << "Very Good"; break;
            case 3: cout << "Fair"; break;
            case 4: cout << "Poor"; break;
            case 5: cout << "Fail"; break;
        }

        cout << endl;
    }
    cout<<"==============================================="<<endl;
    cout<<"question number 6 that print the even numbers in reverse"<<endl;
    int MAX_SIZE;
    cout<<"enter the number of array elements: ";
    cin>>MAX_SIZE;
     int numbers[MAX_SIZE];
    int size2 = 0;

    // Input numbers into the array
    cout << "Enter numbers (enter 0 to stop):\n";
    int num;
    while (size2 < MAX_SIZE) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numbers[size2] = num;
        size2++;
    }

    // Print even numbers in reverse order
    cout << "Even numbers in reverse order:\n";
    for (int i = size2 - 1; i >= 0; --i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

   return 0;

}
