# include <iostream>
using namespace std;
int main(){
   int rows=0;
   int cols = 0;
   cout<<"enter number of rows of your array: ";
   cin>>rows;
   cout<<"enter number of columns of your array : ";
   cin>>cols;
   int first[rows][cols];
   int second[rows][cols];
    cout << "Enter elements for the first array: " << endl;
    for (int i = 1; i < rows+1; ++i) {
        for (int j = 1; j < cols+1; ++j) {
            cout << "Enter element at row" << i <<" and column"<< j <<" : ";
            cin >> first[i][j];
        }
    }
    cout << "\nEnter elements for the second array: " << endl;
    for (int i = 1; i < rows+1; ++i) {
        for (int j = 1; j < cols+1; ++j) {
            cout << "Enter element at row" << i <<" and column"<< j <<" : "; 
            cin >> second[i][j];
        }
    }
    int result[rows][cols];
    for (int i = 1; i < rows+1; ++i) {
        for (int j = 1; j < cols+1; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
    cout << "\nResult of the data in tablular form:" << endl;
    for (int i = 1; i < rows+1; ++i) {
        for (int j = 1; j < cols+1; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
return 0;
}
