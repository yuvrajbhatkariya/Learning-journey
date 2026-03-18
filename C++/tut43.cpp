// *****************/Ambibuity Rsolution/****************
#include<iostream>
using namespace std;
class base1{
    public:
    void greet(void){
        cout<<"Namaste !"<<endl;
    }
};
class base2{
    public:
    void greet(void){
        cout<<"Hello !"<<endl;
    }
};

// Ambibuity Rsolution1:-
class derived : public base1, public base2{
    public :
    void greet(void){
        base2 :: greet();
    }
};




// Ambibuity Rsolution2:-
class new1{
    public:
    void say(void){
        cout<<"Good bye World !"<<endl;
    }
};
class new2 : public new1{
    public :
    void say(void){
        cout<<"Hello world ! "<<endl;
    }
};
int main(){
    // base1 g;
    // g.greet();
    // base2 k;
    // k.greet();
    // derived d;
    // d.greet();


    new2 o1;
    o1.say();


    return 0;
}