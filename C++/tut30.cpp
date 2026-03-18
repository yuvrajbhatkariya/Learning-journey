#include<iostream>
using namespace std;
class complex{
    int a,b,c;
    public:
    complex(void);          // default constructor 
    complex(int,int,int);   // parameterearised constructor gives an argument 
    void set(void){
        cout<<"Your no. is : "<<a+b<<" + i"<<c<<endl;
    }
};
complex :: complex(void) {
    a = 2;
    b = 3;
    c = 5;
}
complex :: complex(int x , int y ,int z){
    a = x;
    b = y;
    c = z;
}
int main(){
    // Implicit call 
    complex o1,o2(3,4,5);
    // complex o2(3,4,4);
    o1.set();

    // Explicit call
    o2.set();
    complex o3 = complex(4,5,6);
    o3.set();
    return 0;
}