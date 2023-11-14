// time to send file Calculator: Calculates the time to transmit a file based on its size and a fixed transmission rate.
#include <iostream>
using namespace std;
int main() {
    const int transmissionRate = 960; // characters per second
    double fileSizeInBytes, fileSizeInCharacters;
    double transmissionTime; // in seconds
    cout << "Enter the file size in bytes: ";
    cin >> fileSizeInBytes;
    fileSizeInCharacters = fileSizeInBytes;
    transmissionTime = fileSizeInCharacters / transmissionRate;
    cout << "Time required to transmit the file: " << transmissionTime << " seconds" << endl;
    return 0;
}
