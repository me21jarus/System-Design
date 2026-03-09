#include <iostream>
using namespace std;

class Workable {
public:
    virtual void work() = 0;
};

class Eatable {
public:
    virtual void eat() = 0;
};

class Human : public Workable, public Eatable {
public:
    void work() {
        cout << "Human working\n";
    }

    void eat() {
        cout << "Human eating\n";
    }
};

class Robot : public Workable {
public:
    void work() {
        cout << "Robot working\n";
    }
};