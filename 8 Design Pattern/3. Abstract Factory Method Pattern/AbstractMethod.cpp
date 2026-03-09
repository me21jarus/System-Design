#include <iostream>
using namespace std;

class Button{
public:
    virtual void paint() = 0;
};

class CheckBox{
public:
    virtual void check() = 0;
};

class WinButton : public Button{
public:
    void paint(){
        cout<<"Windows Button\n";
    }
};

class WinCheckBox : public CheckBox{
public:
    void check(){
        cout<<"Windows Checked\n";
    }
};

class MacButton : public Button{
public:
    void paint(){
        cout<<"Mac Button\n";
    }
};

class MacCheckBox : public CheckBox{
public:
    void check(){
        cout<<"Mac Checked\n";
    }
};

class GUIFactory{
public:
    virtual Button* createButton() = 0;
    virtual CheckBox* createCheck() = 0;
};

class WinFactory : public GUIFactory{
public:
    Button* createButton(){
        return new WinButton();
    }

    CheckBox* createCheck(){
        return new WinCheckBox();
    }
};

class MacFactory : public GUIFactory{
public:
    Button* createButton(){
        return new MacButton();
    }

    CheckBox* createCheck(){
        return new MacCheckBox();
    }
};

int main(){

    GUIFactory* factoryWin = new WinFactory();

    Button* btnW = factoryWin->createButton();
    CheckBox* chkW = factoryWin->createCheck();

    btnW->paint();
    chkW->check();

    GUIFactory* factoryMac = new MacFactory();

    Button* btnM = factoryMac->createButton();
    CheckBox* chkM = factoryMac->createCheck();

    btnM->paint();
    chkM->check();

    return 0;
}