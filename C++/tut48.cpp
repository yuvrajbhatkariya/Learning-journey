#include<iostream>
using namespace std;
class base1{
    protected:
    int d1,d2;
    public:
    base1(int a,int b){
        d1 = a;
        d2 = b;
        cout<<"Constructor of base1 class is called."<<endl;
    }
    void class1(void){
        cout<<"The value of d1 is : "<<d1<<endl;
        cout<<"The value of d2 is : "<<d2<<endl;
    }
};

class base2{
    protected:
    int d3 ,d4;
    public:
    base2(int c , int d){
        d3 = c;
        d4 = d;
        cout<<"Constructor of base2 class is called."<<endl;
    }
    void class2(void){
        cout<<"The value 0f d3 is : "<<d3<<endl;
        cout<<"The value 0f d4 is : "<<d4<<endl;
    }
};

class derived: public base2, public base1{
    protected:
    int d5, d6;
    public:
    
    derived(int p, int q, int r, int s,int t, int u): base1(p,q), base2(r,s){
        cout<<"constructor of derived class called."<<endl;
        d5 = t;
        d6 = u;
    }
    void Derived(void){
        cout<<"The value 0f d3 is : "<<d5<<endl;
        cout<<"The value 0f d4 is : "<<d6<<endl;
    }
};
int main(){
    derived y(1,2,3,4,5,6);
    y.class1();
    y.class2();
    y.Derived();
    return 0;
}