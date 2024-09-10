#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Singleton LogParser class
class LogParser {
private:
    static LogParser* instance;  // Static instance pointer
    string combinedLogs;

    // Private constructor to prevent instantiation
    LogParser() {}

public:
    // Method to get the single instance of the class
    static LogParser* getInstance() {
        if (!instance) {
            instance = new LogParser();
        }
        return instance;
    }

    // Method to parse the log file
void parseLog(const string& filename) {
        ifstream logFile(filename);
        string line;

        if (logFile.is_open()) {
            cout << "Parsing log file: " << filename <<endl;
            while (getline(logFile, line)) {
                combinedLogs += line + "\n";  // Append to combined logs
            }

            logFile.close();
        }
        else {
            cerr << "Unable to open file: " << filename <<endl;
        }

   }

    // Method to show combined logs from both files
    void showLogs() const {
         cout << "Combined Logs:\n" << combinedLogs << endl;
    }
};
// Initialize the static instance pointer to nullptr
LogParser* LogParser::instance = nullptr;

int main() {
            // Get the first Singleton instance
            LogParser* parser1 = LogParser::getInstance();
            LogParser* parser2 = LogParser::getInstance();

            // Check if both instances are pointing to the same object
            if (parser1 == parser2) {
                cout << "Both parser1 and parser2 point to the same LogParser instance!" <<endl;
            }

            parser1->parseLog("logfile.txt");
            parser2->parseLog("logfile2.txt");

            // Show the combined logs
            parser1->showLogs();

            return 0;
}
