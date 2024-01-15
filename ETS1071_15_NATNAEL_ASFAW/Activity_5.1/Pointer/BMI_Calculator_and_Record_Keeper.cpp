#include <iostream>
#include <string>
using namespace std;
const int N = 3; // Number of persons

int main() {
    double personData[N][3]; // 2D array to store height, weight, and BMI for N persons
    string names[N]; // Array to store full names

    // Input data
    for (int i = 0; i < N; i++) {
             cout << "Enter full name for person " << i + 1 << ": ";
             getline(std::cin >> ws, names[i]); // Read full name with spaces
             cout << "Enter height (in meters) for person " << names[i] << ": ";
             cin >> personData[i][0]; // Height
             cout << "Enter weight (in kilograms) for person " << names[i] << ": ";
             cin >> personData[i][1]; // Weight

        // Calculate BMI using pointers
        double *heightPtr = &personData[i][0];
        double *weightPtr = &personData[i][1];
        double *bmiPtr = &personData[i][2];
        *bmiPtr = *weightPtr / (*heightPtr * *heightPtr);
    }

    // Output data in tabular format using pointer operations
         cout << "\n\n";
         cout << "-------------------------------------------------\n";
         cout << "Full Name\t| Height (m)\t| Weight (kg)\t| BMI\t|\n";
         cout << "-------------------------------------------------\n";
    for (int i = 0; i < N; i++) {
              cout << names[i] << "\t| " << personData[i][0] << "\t\t| "
                  << personData[i][1] << "\t\t| " << personData[i][2] << "\t|\n";
    }
         cout << "-------------------------------------------------\n";

    return 0;
}
