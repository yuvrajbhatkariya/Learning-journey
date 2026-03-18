//***********/Friend Function/**************// 
#include<iostream>
using namespace std;
class complex {
    int a,b;
    public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }
    friend complex sumdata(complex q1, complex q2);   // it give authority to acess private member
    void show(){
        cout<<"Here complex no. : "<<a<<"+i"<<b<<endl;
    }
};
complex sumdata(complex q1, complex q2){
    complex q3;
    q3.setdata((q1.a + q2.a),(q1.b + q2.b));          // we can not acess this beacause we don't have permission to acess 
    return q3;       
}
int main(){
    complex c1,c2, Ved;
    c1.setdata(2,3);
    c2.setdata(4,4);
    c1.show();
    c2.show();
    Ved = sumdata(c1,c2);
    Ved.show();

    return 0;
}