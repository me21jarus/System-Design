#include <iostream>
using namespace std;

class oldCharger{
    public:
        void chargeWithRoundPin(){
            cout<<"Charging with Round Pin\n";
        }
};

class Adaptor{
    oldCharger charger;
public:
    void chargeWithTypeC(){
        charger.chargeWithRoundPin();
    }
};

int main(){

    Adaptor adaptor;
    adaptor.chargeWithTypeC();

    return 0;
}