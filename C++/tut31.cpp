//***************/Constructor Overloading/******************
#include<iostream>
using namespace std;
class com{
    int a ,b,c= 69;
    public:
    com(){
        a = 0;
        b = 0;
    }
    com(int x){
        a = x;
        b = 0;
    }
    com(int x,int y){
        a = x;
        b = y;
    }
    com(int x,int y,int z){
        a = x;
        b = y;
        c = z;
    }
    void show(){
        cout<<"Complex no. : "<<a<<" + i"<<b<<"   "<<c<<endl;
    }
};
int main(){
    com o1;
    o1.show();
    com o3(3);
    o3.show();
    com o2(4,5);
    o2.show();
    com o4(4,2,1);
    o4.show();
    return 0;
}