// POINTER :-
#include<iostream>
using namespace std;
int main(){\
    int a = 8;
    int* b = &a;
    int**c = &b;
    cout<<"The value of a is : "<<a<<endl;

    // Refrencing --->

    cout<<"The address of a is : "<<&a<<endl;           
    cout<<"The address of a is : "<<b<<endl;
    cout<<"The address of b is : "<<c<<endl;    

    // De-Refrencing ----->
    cout<<"The value of a is : "<<*b<<endl;     // what value we stored in b
    cout<<"The value of b is : "<<*c<<endl;     // here we know we stored the address so here address is the value
    cout<<"The value of b is : "<<**c<<endl;    // here we get the value of b

//Pointer to Pointer
    int p=8,q=4;
    int* x = &p; 
    int* y = &q;
    int z = *x;
    *x = *y;
    *y = z;
    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of q is "<<q<<endl;

    return 0;
}