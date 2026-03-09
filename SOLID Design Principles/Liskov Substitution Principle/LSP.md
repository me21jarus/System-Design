3️⃣ Liskov Substitution Principle (LSP)

👉 Definition:
A child class should replace the parent class without breaking the program.

❌ Wrong Example

class Bird {
public:
    virtual void fly() {
        cout << "Flying\n";
    }
};

class Penguin : public Bird {
public:
    void fly() {
        cout << "Penguins cannot fly\n";
    }
};

Problem: Penguin cannot fly, but inherits fly().