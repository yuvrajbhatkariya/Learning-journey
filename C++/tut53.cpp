// use of 'this' pointer :-
#include<iostream>
using namespace std;
class Y{
    int a;
    public:
    // void set(int a){
    //     // a = a;                     // This will not work it gives the garbage value.
    //     this->a = a;                  // 'this' is used here to solve the above problem .

    // }

    // return value:-
    Y & set(int a){
        this->a = a;
        return *this;
    }
    void get(void){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    Y v;
    v.set(9);
    v.get();

    // using set as an object 
    v.set(69).get();
    return 0;
}