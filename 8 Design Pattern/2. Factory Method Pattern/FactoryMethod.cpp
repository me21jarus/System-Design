#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0;
};

class Circle : public Shape{
    public:
        void draw(){cout<<"Circle Created"<<endl;}
};

class Square : public Shape{
    public:
        void draw(){cout<<"Square Created"<<endl;}
};

class ShapeFactory{
    public:
        static Shape* createShape(string type){
            if(type == "circle") return new Circle();
            if(type == "square") return new Square();
            return NULL;
        }
};

int main(){
    Shape* c = ShapeFactory::createShape("circle");
    c->draw();
    Shape* s = ShapeFactory::createShape("square");
    s->draw();

    return 0;
}