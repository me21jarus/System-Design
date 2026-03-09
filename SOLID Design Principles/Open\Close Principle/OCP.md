2️⃣ Open/Closed Principle (OCP)

👉 Definition:
Software should be open for extension but closed for modification.

You should add new behavior without changing existing code.

❌ Wrong Example

class Discount {
public:
    double getDiscount(string type) {
        if(type == "student") return 10;
        else if(type == "senior") return 20;
        return 0;
    }
};

If a new discount type comes → we must modify code.