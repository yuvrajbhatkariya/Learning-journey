// ***************/Constructor wuth default argument/***************//
#include<iostream>
using namespace std;
class ved{
    int a,b,c;
    public:
    ved(int x= 0, int y= 0, int z = 0){
        a = x;
        b = y;
        c = z;
    }
    void display();
};
void ved :: display(){
        cout<<"The value of a ,b and c is : "<<a<<","<<b<<","<<c<<endl;
}
int main(){
    ved o1(1,11,11);
    ved o2(1,11);
    ved o3(1);
    o1.display();
    o2.display();
    o3.display();
    return 0;
}