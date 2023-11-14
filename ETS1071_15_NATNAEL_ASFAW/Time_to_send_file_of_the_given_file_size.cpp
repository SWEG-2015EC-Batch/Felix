#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int transmissionRate = 960; // Transmission rate in bytes per second
    const int fileSize = 419430400; // File size in bytes (400MB)

    // Calculate the time taken to send the file
    double timeInSeconds = static_cast<double>(fileSize) / transmissionRate;

    // Convert time to days, hours, minutes, and seconds
        int days = static_cast<int>(timeInSeconds / (24 * 3600));

        int remainingTime = static_cast<int>(timeInSeconds) % (24 * 3600);

        int hours = remainingTime / 3600;

        remainingTime %= 3600;

        int minutes = remainingTime / 60;

        int seconds = remainingTime % 60;

    // Display the time taken to send the file
        cout << "Time taken to send a 400MB file:" << endl;
        cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds <<endl;

    return 0;
}
