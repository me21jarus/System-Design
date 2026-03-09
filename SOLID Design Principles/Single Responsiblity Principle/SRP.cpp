#include <iostream>
using namespace std;

class Report {
public:
    void generateReport() {
        cout << "Generating report\n";
    }
};

class FileManager {
public:
    void saveToFile() {
        cout << "Saving report to file\n";
    }
};

int main() {
    Report r;
    FileManager f;

    r.generateReport();
    f.saveToFile();
}