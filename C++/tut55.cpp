// pointer to derived class:
#include<iostream>
using namespace std;
class base{
    protected:
    public:
        int a;  
        void display(void){
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
    base O1;
    derived O2;
    B = &O2; 
    B->a = 69;
    B->display();

    // it points the derived class but not 
    // B->b = 78;
    // B->display();

    derived *D;
    D = &O2;
    D->a = 999;
    D->b = 106;
    D->display();
    return 0;
}