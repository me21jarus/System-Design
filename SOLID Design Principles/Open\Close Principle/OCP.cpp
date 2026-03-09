#include <iostream>
using namespace std;

class Discount {
public:
    virtual double getDiscount() = 0;
};

class StudentDiscount : public Discount {
public:
    double getDiscount() {
        return 10;
    }
};

class SeniorDiscount : public Discount {
public:
    double getDiscount() {
        return 20;
    }
};

int main() {
    Discount* d = new StudentDiscount();
    cout << d->getDiscount();
}