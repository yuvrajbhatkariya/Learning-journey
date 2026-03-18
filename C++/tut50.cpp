// Pointer recap with New and delete operator :- 
#include<iostream>
using namespace std;
int main(){
    int a = 69;
    int* p = &a;
    *p = 106;
    cout<<"adress of a : "<<p<<endl;
    cout<<"value of a : "<<*p<<endl;


    // New operator :-
    int* x = new int(1086);
    cout<<"x : "<<*x<<endl;

    float *A = new float[3];
    A[0] = 50;
    A[1] = 61;
    // A[2] = 61;
    *(A+2) = 62;
    A[3] = 54;

    // Delete operator :- 
    delete x;
    delete [] A;
    cout<<" A[0] : "<<A[0]<<endl;
    cout<<" A[1] : "<<A[1]<<endl;
    cout<<" A[2] : "<<A[2]<<endl;
    // cout<<" A[3] : "<<A[3]<<endl;

    
    
    return 0;
}