#include<iostream>
using namespace std;
template <class X, class Y,class Z> 
class ved{
    X data1;
    Y data2;
    Z data3;
    public:
    ved(X a, Y b){
        data1 = a;
        data2 = b;
        cout<<this->data1<<this->data2<<" + ";
    }
    ved(X a , Y b ,Z c){
        data3 = c;
        data1 = a;
        data2 = b;
        cout<<this->data1<<this->data2<<" = "<<data3<<endl;
    }
    // void e1(void){
    //     cout<<this->data1<<this->data2<<" + ";
    // }
    // void e2(void){
    //     cout<<this->data1<<this->data2<<" = "<<data3<<endl;
    // }
};
int main(){
    ved <int , char, int> v1(3,'a') ,v2(4,'b',3);
    // v1.e1();
    // v2.e2();
    return 0;
}