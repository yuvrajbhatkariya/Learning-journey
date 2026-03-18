// ***************/Constructor/********************//

#include<iostream>
using namespace std;
class Complex{
    // int static a,b;
    int a,b;
    public:
    // Constructor havig same name as class
    Complex(void);  // --> default constructor


    // void set(void){
    //     a = 7;
    //     b = 5;
    //     cout<<a<<endl;
    //     cout<<b<<endl;
    // }
    // static void setnumber(){
    //     cout<<"The complex number is "<<a <<" + i"<<b<<endl;
    // }

    void setnumber(void){
        cout<<"The complex number is "<<a <<" + i"<<b<<endl;
    }
};
// int Complex :: a = 4;
// int Complex :: b = 5;
Complex :: Complex(void){
    a = 0;
    b = 0;
    cout<<"Hello;"<<endl;

    
}
int main(){
    Complex o1;
    // o3.set();
    o1.setnumber();
    return 0;
}