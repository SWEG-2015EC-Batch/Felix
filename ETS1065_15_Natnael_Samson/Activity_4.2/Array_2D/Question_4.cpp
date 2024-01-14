#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int nums[3][4];
    int even[12], k{0};

    for (int i = 0; i < 3; i++) {
        cout << "Please enter the four elements for row " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cin >> nums[i][j];
            if (nums[i][j] % 2 == 0) {
                even[k] = nums[i][j];
                k++;
            }
        }
        cout << endl;
    }

    for (int i {0}; i < 3; i++) {
        for (int j {0}; j < 4; j++) {
            if (nums[i][j] % 2 == 0) {
                cout<<setw(5)<<nums[i][j];
            }else{
                cout<<setw(5)<<"*";
            }
        }
        cout<<endl;
    }

    int total = 0;
    for (int i = 0; i < k; i++) {
        total += even[i];
    }

    cout << "\nTotal even: " << total << endl<<endl;;

    return 0;
}
