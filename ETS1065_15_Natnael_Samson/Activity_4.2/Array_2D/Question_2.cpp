#include <iostream>
using namespace std;
int main () {
    int nums[2][4];
    int rows_product[2];
    int columns_sum[4];
    for (int i {0}; i < 2; i++) {
        cout <<"please enter 4 elements for the "<<i+1<<" row separated by space: ";
        for (int j {0}; j < 4; j++) {
            cin >> nums[i][j];
        }
        rows_product[i] = nums[i][0] * nums[i][1] * nums[i][2] * nums[i][3];
        cout <<endl;
    }
    for (int i {0}; i < 4; i++) {
        columns_sum[i] = nums[0][i] + nums[1][i];
    }
    for (int i {0}; i < 2; i++) {
        cout <<"Rows "<<i+1<<" Product: "<<rows_product[i]<<endl;
    }
    for (int i {0}; i < 4; i++) {
        cout <<"column "<<i+1<<" sum: "<<columns_sum[i]<<endl;
    }
    return 0;
}
