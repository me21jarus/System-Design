#include <iostream>
using namespace std;

class House{
public:
    string wall,roof;

    void show(){
        cout<<wall<<" "<<roof<<endl;
    }
};

class HouseBuilder{
    House h;
public:
    HouseBuilder& buildWall(){
        h.wall = "Brick Wall";
        return *this;
    }
    HouseBuilder& buildRoof(){
        h.roof = "Concrete Roof";
        return *this;
    }
    House build(){
        return h;
    }
};

int main(){
    House house = HouseBuilder().buildWall().buildRoof().build();
    house.show();

    return 0;
}