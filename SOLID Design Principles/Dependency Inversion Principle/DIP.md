5️⃣ Dependency Inversion Principle (DIP)

👉 Definition:
High-level modules should depend on abstractions, not concrete classes.

❌ Wrong Example

class Keyboard {};

class Computer {
    Keyboard keyboard;
};

Computer directly depends on Keyboard.