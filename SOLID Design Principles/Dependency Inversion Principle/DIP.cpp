#include <iostream>
using namespace std;

class InputDevice {
public:
    virtual void input() = 0;
};

class Keyboard : public InputDevice {
public:
    void input() {
        cout << "Keyboard input\n";
    }
};

class Computer {
    InputDevice* device;
public:
    Computer(InputDevice* d) {
        device = d;
    }

    void start() {
        device->input();
    }
};

int main() {
    Keyboard k;
    Computer c(&k);
    c.start();
}