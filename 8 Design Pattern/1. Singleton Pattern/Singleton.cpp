#include<iostream>
using namespace std;

class singleton{
private:
    static singleton* instance;

    singleton() {}

public:
    static singleton* getInstance(){
        if(instance == nullptr)
            instance = new singleton();
        return instance;
    }
    void show(){
        cout<<"Single Instance used"<<endl;
    }
};

singleton* singleton::instance = nullptr;

int main(){
    singleton* s1 = singleton::getInstance();
    singleton* s2 = singleton::getInstance();
    s1->show();
    s2->show();

    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}