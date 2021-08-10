#include <iostream>
using namespace std;
class Light{
    int state;
    public:
    void switchOn(){
        state = 1;
    }
    void switchOff(){
        state = 0;
    }
    int isOn(){
        return state;
    }
};
class Fan{
    int state;
    public:
    void switchOn(){
        state = 1;
    }
    void switchOff(){
        state = 0;
    }
    int isOn(){
        return state;
    }
};
class LightFan : public Fan, public Light{
    public:
    void switchOn(){
        Fan::switchOn();
        Light::switchOn();
    }
    void switchOff(){
        Fan::switchOff();
        Light::switchOff();
    }
    void isOn(){
        if(Fan::isOn()){
            cout<<"Fan is Switched ON"<<endl;
        }
        else{
            cout<<"Fan is Switched OFF"<<endl;
        }
        if(Light::isOn()){
            cout<<"Light is Switched ON"<<endl;
        }
        else{
            cout<<"Light is Switched OFF"<<endl;
        }
    }
};
int main(){
    LightFan lf;
    Light l1;
    lf.switchOn();
    lf.isOn();
    return 0;
}