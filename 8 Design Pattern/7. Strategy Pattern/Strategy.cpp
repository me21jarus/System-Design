#include <iostream>
using namespace std;

class PaymentStrategy {
public:
    virtual void pay(int amount) = 0;
};

class CreditCard : public PaymentStrategy {
public:
    void pay(int amount) {
        cout << "Paid " << amount << " using Credit Card\n";
    }
};

class PayPal : public PaymentStrategy {
public:
    void pay(int amount) {
        cout << "Paid " << amount << " using PayPal\n";
    }
};

class ShoppingCart{
    PaymentStrategy* strategy;
public:
    void setStrategy(PaymentStrategy* s){
        strategy = s;
    }
    void checkout(int amount){
        strategy->pay(amount);
    }
};

int main(){
    ShoppingCart cart;

    cart.setStrategy(new CreditCard());
    cart.checkout(1000);
    return 0;
}