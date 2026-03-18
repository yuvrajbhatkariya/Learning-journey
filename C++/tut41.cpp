// ************/Multiple Inheritance/***********************

#include<iostream>
using namespace std;
class base1{
    protected :
    int num1;
    public :
    void seta(int a){
        num1 = a;
    }
};
class base2{
    protected :
    int num2;
    public:
    void setb(int b){
        num2 = b;
    }
};
class base3{
    protected :
    int num3;
    public:
    void setc(int c){
        num3 = c;
    }
};

//  Multiple derived class------>
class derived : public base1,public base2,public base3{
    public :
    void display(void){
        cout<<"The value of base class 1 is : "<<num1<<endl;
        cout<<"The value of base class 2 is : "<<num2<<endl;
        cout<<"The value of base class 3 is : "<<num3<<endl;
        cout<<"The sum of this value is : "<<num1+ num2+ num3<<endl;
    }
};

int main(){
    derived y;
    y.seta(24);
    y.setb(45);
    y.setc(65);
    y.display();
    return 0;
}