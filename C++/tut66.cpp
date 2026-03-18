#include<iostream>
using namespace std;
template<class Y1 = int,class Y2 = int ,class Y3 = int ,class Y4 = int>
class buddy{
    Y1 a;
    Y2 b;
    Y3 c;
    Y3 d;
    public:
    buddy(Y1 a, Y2 b,Y3 c){
        this-> d = d;
        this-> a = a;
        this-> b = b;
        this-> c = c;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl<<endl;
    }
    void add(void){
        d = a + b + c ;
        cout<<"The addition of this value is : "<<d<<endl<<endl;
    }
};
int main(){
    buddy <char ,char ,char ,char>b1('a','b','c');
    b1.add();
    buddy <>b2(1,2,3);
    b2.add();
    return 0;
}