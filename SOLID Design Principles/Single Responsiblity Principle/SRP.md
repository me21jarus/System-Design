1️⃣ Single Responsibility Principle (SRP)

👉 Definition:
A class should have only one responsibility (one reason to change).

❌ Wrong Example

#include <iostream>
using namespace std;

class Report {
public:
    void generateReport() {
        cout << "Generating report content...\n";
    }

    void saveToFile() {
        cout << "Saving report to a physical file...\n";
    }
};

Problem:
Report is doing two things

generating report

saving report
