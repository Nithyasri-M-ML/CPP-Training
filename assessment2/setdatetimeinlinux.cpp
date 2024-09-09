#include <iostream>
#include <cstdlib>  
using namespace std;

void setDateTime(const string& dateTime) {
    // Construct the command to set the system date and time
    string command = "sudo date -s \"" + dateTime + "\"";

    int result = system(command.c_str());

    if (result == 0) {
        cout << "Date and time set successfully." << endl;
    } else {
        cout << "Failed to set date and time. Ensure you have the necessary permissions." << endl;
    }
}

int main() {
    string dateTime;

    cout << "Enter the date and time (e.g., \"2024-09-04 14:30:00\"): ";
    getline(cin, dateTime);

    setDateTime(dateTime);

    return 0;
}

