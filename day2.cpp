#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("log.txt");
    if (!file.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    string line;
    int errorCount = 0;
    int infoCount = 0;
    int warningCount = 0;

    while (getline(file, line)) {
        if (line.find("ERROR") != string::npos) {
            cout << line << endl;
            errorCount++;
        }
        if (line.find("INFO") != string::npos)
            infoCount++;
        if (line.find("WARNING") != string::npos)
            warningCount++;
    }

    cout << "Total ERROR: " << errorCount << endl;
    cout << "Total INFO: " << infoCount << endl;
    cout << "Total WARNING: " << warningCount << endl;

    if (errorCount >= 3)
        cout << "Critical alert triggered" << endl;
    else if (errorCount >= 2)
        cout << "System unhealthy" << endl;
    else
        cout << "System healthy" << endl;

    cout << "Total lines: " << errorCount + infoCount + warningCount << endl;
    return 0;
}