// Pointers to Objects and Arrow Operator:-
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void set(int x,int y){
            a = x;
            b = y;
        }
        void get(void){
            cout <<"Complex :"<<a << " + " << b << "i" << endl;
        }
};
int main(){
    Complex c1;
    c1.set(69,106);
    c1.get();

    // // making object with pointer:-
    // Complex *P = &c1;
    // (*P).set(89,69);
    // (*P).get();

    // // making object using pointer & new :-
    Complex* Ptr = new Complex; 
    // (*Ptr).set(189,169);
    // (*Ptr).get();

    // // using a '->' operator :-
    // Ptr->set(8999,6999);
    // Ptr->get();

    // //  making an array of obhect : =
    Complex *ptr1 = new Complex[4];
    ptr1->set(000,00);
    ptr1->get();
    for(int i = 0; i<=4; i++){
        (ptr1+i)->set(i+1,i+9);
    }

    for(int i = 0; i<=4; i++){
        (ptr1+i)->get();
    }

    return 0;
}