#include<iostream>
using namespace std;
class Complex{
    int a,b,c;
    public:
    Complex(void);          // default constructor 
    Complex(int,int,int);   // parameterearised constructor gives an argument 
    void set(void){
        cout<<"Your no. is : "<<a+b<<" + i"<<c<<endl;
    }
};
Complex :: Complex(void) {
    a = 2;
    b = 3;
    c = 5;
}
Complex :: Complex(int x , int y ,int z){
    a = x;
    b = y;
    c = z;
}
int main(){
    // Implicit call 
    Complex o1,o2(3,4,5);
    // Complex o2(3,4,4);
    o1.set();

    // Explicit call
    o2.set();
    Complex o3 = Complex(4,5,6);
    o3.set();
    return 0;
}