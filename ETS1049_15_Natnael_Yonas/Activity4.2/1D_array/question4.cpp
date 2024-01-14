#include <iostream>
# include<iomanip>
using namespace std;
int main(){
    double volts[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    int size = sizeof(volts)/sizeof(volts[0]);

    cout << setw(10) << "Voltage" << setw(10) << "Voltage" << setw(10) << "Voltage" << endl;
    cout << setw(10) << "--------" << setw(10) << "--------" << setw(10) << "--------" << endl;

    for (int i = 0; i < size; i++) {
        cout << fixed << setw(10) << setprecision(2) << volts[i];

        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
    return 0;
}
