#include<iostream>
using namespace std;
// float average1(int a , float b){
//     float avg = (a + b)/2;
//     return avg;
// }
// float average2(int a , int b){
//     float avg = (a + b)/2;
//     return avg;
// }


// USING TEMPLATE IN FUNCTION:-
template <class T1, class T2>
float average(T1 a , T2 b){         // here we can give any data type value 
    float avg = (a + b)/2;
    return avg;
}
template <class t>
void swapp( t a ,t b){
    t temp = a;
    a = b;
    b = temp;
    cout<<"The value1 is : "<<a<<endl;
    cout<<"The value2 is : "<<b<<endl;
}
int main(){
    // float a,b;
    // a = average1(3,6.0089);
    // cout<<a<<endl;
    // b = average1(3,6);
    // // cout<<b<<endl;
    // printf("The average of two no. is : %.3f",a);    // here we using C 

    float x;
    x = average(8,8.6);
    // cout<<x;
    printf("The average value is : %.3f",x);
    cout<<endl;
    swapp(5 ,6);

    return 0;
}