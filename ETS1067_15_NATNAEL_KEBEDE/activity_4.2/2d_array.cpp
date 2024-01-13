#include <iostream>
using namespace std;

int main() {
    
   cout<<"question number 1 that check equivalence of arrays"<<endl;
   cout<<"=================================================="<<endl;
    const int maxSize = 50; // You can change this size according to your needs
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    int array1[maxSize];
    int array2[maxSize];

    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }

    cout << "Enter elements for the second array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i];
    }

    // Check if the arrays are identical
    int i;
    for (i = 0; i < size; ++i) {
        if (array1[i] != array2[i]) {
            cout << "The arrays are not identical." << endl;
            break;
        }
    }

    // Display the result
    if (i == size) {
        cout << "The arrays are identical." << endl;
    }
    cout<<"=================================================="<<endl;



    cout<<"question number 2 that multiply the rows and add the columns"<<endl;
    const int rows = 3; // You can change the number of rows
    const int cols = 3; // You can change the number of columns

    int matrix[rows][cols];

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

   

    // Calculate and display the multiplication of row elements
    cout << "\nMultiplication of row elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < cols; ++j) {
            rowProduct *= matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowProduct << endl;
    }

    // Calculate and display the sum of column elements
    cout << "\nSum of column elements:" << endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    cout<<"=================================================="<<endl;
   

   cout<<"question number 3 that print the testscore"<<endl;
    const int numExams = 5;
    const int maxNameLength = 30;  // Assuming a maximum of 30 characters for exam names

    char examNames[numExams][maxNameLength];
    int examScores[numExams];

    // Input exam names and scores
    for (int i = 0; i < numExams; ++i) {
        cout << "Enter the name for Exam " << i + 1 << ": ";
        cin >> examNames[i];

        cout << "Enter the score for Exam " << i + 1 << ": ";
        cin >> examScores[i];
    }

    // Calculate total marks
    int totalMarks = 0;
    for (int i = 0; i < numExams; ++i) {
        totalMarks += examScores[i];
    }

    // Determine score level
    const char* scoreLevel = "Fail";  // Default to Fail
    if (totalMarks >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMarks >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMarks >= 50) {
        scoreLevel = "Fair";
    } else if (totalMarks >= 40) {
        scoreLevel = "Poor";
    }

    // Display results in tabular format
    cout << "\nExam Scores Report:" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Exam\t\tScore" << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 0; i < numExams; ++i) {
        cout << examNames[i] << "\t\t" << examScores[i] << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << "Total Marks\t" << totalMarks << endl;
    cout << "Score Level\t" << scoreLevel << endl;
cout<<"=================================================="<<endl;





cout<<"question number 4 that prints the sum of even elements of an array"<<endl;
//entering th array elemnts
    int array[3][4];
    int sum {0};
    cout<<"enter the array elemnets"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"enter array["<<i<<"]"<<"["<<j<<"]: ";
            cin>>array[i][j];
        }
        
    }
    cout<<"----------------------------"<<endl;
   
   
    //display the array elements
    cout<<"display the array"<<endl;
    cout<<"----------------------------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j]%2 == 0)
            {
                sum += array[i][j];
                cout<<array[i][j]<<"\t";
            }
            else{
                cout<<"*"<<"\t";
            }
            
        }
        cout<<endl;
        
    }
    cout<<"----------------------------"<<endl;
    cout<<"the sum of even array elemnets is: " <<sum<<endl;

    
    cout<<"=================================================="<<endl;
    cout <<"question number 5 that is called friend matrix"<<endl;
   
   const int numPeople = 5;  // Adjust the number of people as needed
 // Initialize the 2D array to represent friendships
    bool friends[numPeople][numPeople] = {
        {false, true, false, true, false},
        {true, false, true, true, false},
        {false, true, false, false, true},
        {true, true, false, false, true},
        {false, false, true, true, false}
    };

    // Display the friendship matrix with "*"
    cout << "Friendship Matrix:" << endl;
    for (int i = 0; i < numPeople; ++i) {
        for (int j = 0; j < numPeople; ++j) {
            if (friends[i][j]) {
                cout << "* ";
            } else {
                cout << "  ";  // Two spaces for alignment
            }
        }
        cout << endl;
    }

    // Count the pairs of friends
    int friendPairsCount = 0;
    for (int i = 0; i < numPeople; ++i) {
        for (int j = i + 1; j < numPeople; ++j) {
            if (friends[i][j]) {
                cout << "Friends: Person " << i + 1 << " and Person " << j + 1 << endl;
                friendPairsCount++;
            }
        }
    }

    cout << "Total number of friend pairs: " << friendPairsCount << endl;

  cout<<"=================================================="<<endl;


    return 0;
}
