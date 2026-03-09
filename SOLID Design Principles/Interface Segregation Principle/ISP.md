4️⃣ Interface Segregation Principle (ISP)

👉 Definition:
Clients should not be forced to implement methods they don't use.

❌ Wrong Example

class Worker {
public:
    virtual void work() = 0;
    virtual void eat() = 0;
};

class Robot : public Worker {
public:
    void work() {
        cout << "Robot working\n";
    }

    void eat() { } // Robots don't eat
};