#include <iostream>
using namespace std;

class Bird {};

class FlyingBird : public Bird {
public:
    void fly() {
        cout << "Flying\n";
    }
};

class Sparrow : public FlyingBird {};

class Penguin : public Bird {};