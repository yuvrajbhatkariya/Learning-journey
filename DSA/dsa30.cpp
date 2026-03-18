#include<iostream>
using namespace std;

//1. Here we use MARCOS  : -

// #define PI 3.14


/*
// 2.Multiple define MACROS : -

#define hello 2,\
    3,\
    4,\
    5

*/

// 3.Condtion apply marcos :-)

// # define check(a,b) (((a)>(b))  ? a : b)



// INLINE FUNCTION :

inline int maxv(int &a,int &b){
    return ((a>b) ? a : b);
}



int main(){


    /*
    1.
    // Heer we allocate memory :
    // double PI = 3.14;

    double r = 5,h = 9;
    cout<<endl<<endl<<"             : Area :"<<endl<<endl;
    cout<<"Curved surface area of cylinder : "<<2*PI*r*h<<endl;
    cout<<"Total survace area of surface cylinder  : "<<2*PI*r*(r+h)<<endl<<;
    
    */

   /*
    2.
    int arr[] = {hello};
    cout<<hello;
    cout<<endl;

    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }

   */

    // 3.
    int a = 8;
    int b = 9;
    // int v = maxv(a,b);
    // cout<<v<<endl;
    cout<<"The greater value in between "<<a <<" and "<<b<<" is "<<maxv(a,b)<<endl;
    // cout<<"The greater value in between "<<a <<" and "<<b<<" is "<<check(a,b);
    
    return 0;
}