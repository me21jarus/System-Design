#include<iostream>
using namespace std;

class Coffee{
    public:
        virtual int cost(){return 50;}
};

class MilkDecorator : public Coffee{
    Coffee* coffee;
public:
    MilkDecorator(Coffee* c){coffee = c;}
    int cost(){
        return coffee->cost() + 20;
    }
};

int main(){
    Coffee* coffee = new Coffee();
    Coffee* milkCoffee = new MilkDecorator(coffee);
    cout<<milkCoffee->cost()<<endl;

    return 0;
}