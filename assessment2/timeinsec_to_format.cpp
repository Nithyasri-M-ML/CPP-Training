#include <iostream>
#include <iomanip>

using namespace std;

class TimeConverter {
private:
    int totalSeconds;

public:
    // Constructor to initialize totalSeconds
    TimeConverter(int seconds = 0) : totalSeconds(seconds) {}

    // Function to convert totalSeconds to HH:MM:SS format
    void displayTime() const {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        // Display time in HH:MM:SS format
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << endl;
    }
};

int main() {
    int inputSeconds;
    
    cout << "Enter time in seconds: ";
    cin >> inputSeconds;

    // Create a TimeConverter object
    TimeConverter timeConverter(inputSeconds);

    // Display the time in HH:MM:SS format
    timeConverter.displayTime();

    return 0;
}

