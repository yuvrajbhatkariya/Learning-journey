// ***************/Passsing object as function/************************

#include<iostream>
using namespace std;
class complex{ 
    int a,b;
    public : 
    void setdata(int V1 , int V2){
        a = V1;
        b = V2;
    }
    void sumdata(complex o1,complex o2){            // here we usse object in function as an arrgument : 
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void show(){
        cout<<"The it is given complex no. : "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,4);
    c1.show();
    c2.setdata(4,3);
    c2.show();
    c3.sumdata(c1,c2);
    c3.show();
    return 0;
}