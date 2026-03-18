// Virtual function :-
#include<iostream>
using namespace std;
class base{
    public:
    int a;
    virtual void display(void){
        cout<<"The value of a in base class : "<<a<<endl;
    }
};
class derived : public base{
    public:
    int b;
    void display(void){
        cout<<"The value of a in derived class : "<<a<<endl;
        cout<<"The value of b in derived class : "<<b<<endl;
    }
};
int main(){
    base *B;
    base o1;
    derived o2;
    // B = &o1;       // here order matters wich one is at last than thoes function is execute.
    B = &o2;         // her we can change the class function which we need.
    B->a = 99999;
    o2.a = 45;
    o2.b = 89999;
    B->display();

    // derived *D,o2;
    // D = &o2;
    // D->a = 70;
    // D->b = 69;
    // D->display();
    return 0;
}