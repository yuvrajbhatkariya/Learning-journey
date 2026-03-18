// Pointers to Objects and Arrow Operator:-
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void set(int x,int y){
            a = x;
            b = y;
        }
        void get(void){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
        }
};
int main(){
    complex c1;
    c1.set(69,106);
    c1.get();

    // // making object with pointer:-
    // complex *P = &c1;
    // (*P).set(89,69);
    // (*P).get();

    // // making object using pointer & new :-
    complex* Ptr = new complex; 
    // (*Ptr).set(189,169);
    // (*Ptr).get();

    // // using a '->' operator :-
    // Ptr->set(8999,6999);
    // Ptr->get();

    // //  making an array of obhect : =
    complex *ptr1 = new complex[4];
    Ptr->set(000,00);
    Ptr->get();
    return 0;
}