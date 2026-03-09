#include <iostream>
#include <vector>
using namespace std;

class Observer{
public:
    virtual void update(string msg) = 0;
};

class Subscriber : public Observer{
    public:
        void update(string msg){
            cout<<"Recieved: "<<msg<<endl;
        }
};

class Channel{
    vector<Observer*> subs;
public:
    void subscribe(Observer* o){
        subs.push_back(o);
    }
    void notify(string msg){
        for(auto s : subs){
            s->update(msg);
        }
    }
};

int main(){

    Channel ch;

    Subscriber s1,s2;

    ch.subscribe(&s1);
    ch.subscribe(&s2);

    ch.notify("New Video Uploaded!");

    return 0;
}