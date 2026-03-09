# System Design Basics in C++

This repository contains **simple and beginner-friendly C++ implementations** of:

* **8 Most Important Design Patterns**
* **SOLID Design Principles**

Each concept includes:

* 📖 Simple explanation
* 🌍 Real-world analogy
* 💻 Easy C++ example

The goal of this repository is to help understand **software design concepts that are frequently asked in interviews and used in real systems.**

---

# 📂 Project Structure

```
.
├── 8 Design Pattern
│   ├── 1. Singleton Pattern
│   ├── 2. Factory Method Pattern
│   ├── 3. Abstract Factory Pattern
│   ├── 4. Builder Pattern
│   ├── 5. Adapter Pattern
│   ├── 6. Decorator Pattern
│   ├── 7. Strategy Pattern
│   └── 8. Observer Pattern
│
└── SOLID Design Principles
    ├── Single Responsibility Principle
    ├── Open/Close Principle
    ├── Liskov Substitution Principle
    ├── Interface Segregation Principle
    └── Dependency Inversion Principle
```

---

# 🎯 8 Design Patterns Implemented

These are **commonly used object-oriented design patterns** that help make code more reusable, scalable, and maintainable.

### 1️⃣ Singleton Pattern

Ensures **only one instance** of a class exists.

Example: Database connection manager.

---

### 2️⃣ Factory Method Pattern

Creates objects **without exposing object creation logic**.

Example: Creating different types of notifications (Email, SMS).

---

### 3️⃣ Abstract Factory Pattern

Creates **families of related objects** without specifying their concrete classes.

Example: UI components for **Windows vs Mac**.

---

### 4️⃣ Builder Pattern

Used to **construct complex objects step-by-step**.

Example: Building a **House** with different parts.

---

### 5️⃣ Adapter Pattern

Allows **incompatible interfaces to work together**.

Example: Power plug adapter for different countries.

---

### 6️⃣ Decorator Pattern

Adds **new functionality dynamically** without modifying existing code.

Example: Adding toppings to a pizza.

---

### 7️⃣ Strategy Pattern

Defines a **family of algorithms** and lets you choose one at runtime.

Example: Different payment methods (UPI, Credit Card, PayPal).

---

### 8️⃣ Observer Pattern

Defines a **one-to-many dependency** where multiple objects get notified when one object changes.

Example: YouTube subscribers getting notified when a new video is uploaded.

---

# 🧱 SOLID Design Principles

SOLID principles help developers write **clean, maintainable, and scalable code.**

---

### 1️⃣ Single Responsibility Principle (SRP)

A class should have **only one reason to change**.

Example: Separate classes for **Report Generation** and **Report Printing**.

---

### 2️⃣ Open/Closed Principle (OCP)

Software entities should be:

✔ **Open for extension**
❌ **Closed for modification**

Example: Add new payment methods **without modifying existing code**.

---

### 3️⃣ Liskov Substitution Principle (LSP)

Derived classes should be able to **replace their base classes without breaking functionality**.

Example: A `Bird` class where `Duck` and `Sparrow` behave correctly.

---

### 4️⃣ Interface Segregation Principle (ISP)

Clients should **not be forced to depend on interfaces they do not use**.

Example: Separate interfaces for **Print**, **Scan**, and **Fax**.

---

### 5️⃣ Dependency Inversion Principle (DIP)

High-level modules should **not depend on low-level modules**.
Both should depend on **abstractions**.

Example: Using interfaces for database access.

---

# 🚀 How to Run the Examples

Compile using **g++**:

```bash
g++ -std=c++17 filename.cpp -o output
./output
```

Example:

```bash
g++ -std=c++17 Singleton.cpp -o singleton
./singleton
```

---

# 📚 Why This Repository?

This project helps with:

✔ Learning **System Design Basics**
✔ Preparing for **Software Engineering Interviews**
✔ Understanding **Object-Oriented Design**
✔ Practicing **C++ Design Patterns**

---

# 🤝 Contributions

Contributions are welcome!

You can:

* Improve examples
* Add more design patterns
* Optimize code
* Improve documentation

---

# ⭐ If this helped you

Consider **starring the repository** to support the project!
