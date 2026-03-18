//  Pointers : -
#include<iostream>
void update(double ***p){
    // p = p + 1;

    // *p = *p + 1;

    // **p = **p + 1;

    ***p = ***p + 1;
}
using namespace std;
int main(){
    /* 
    int arr[10] = {0};
    int *ptr = &arr[0];
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<arr + 1<< " " <<&arr[1]<<endl;
    cout<<&(1[arr])<<endl;

    cout<<"Size : "<<sizeof(arr)<<endl;
    cout<<"Size : "<<sizeof(ptr)<<endl;

    */

    // double pointers:
    double a = 9.9999;
    double *ptr = &a;
    double **ptr1 = &ptr;
    double ***ptr2 =  &ptr1;


    cout<<endl<<"before : "<<endl<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    update(ptr2);
    cout<<endl<<"After : "<<endl<<endl;

    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    // cout<<"Adress of a : "<<&a<<endl;
    // cout<<"Adress of a : "<<ptr<<endl;
    // cout<<"Adress of a : "<<*ptr1<<endl;
    // cout<<"Adress of a : "<<**ptr2<<endl;
    // cout<<endl;
    // cout<<"Adress of ptr : "<<&ptr<<endl;
    // cout<<"Adress of ptr : "<<ptr1<<endl;
    // cout<<"Adress of ptr : "<<*ptr2<<endl;
    // cout<<endl;
    // cout<<"Adress of ptr1 : "<<&ptr1<<endl;
    // cout<<"Adress of ptr1 : "<<ptr2<<endl;
    // cout<<endl;
    // cout<<"Adress of ptr2 : "<<&ptr2<<endl;
    // cout<<endl;
    // cout<<"The value of a :  "<<a<<endl;
    // cout<<"The value of a :  "<<*ptr<<endl;
    // cout<<"The value of a :  "<<**ptr1<<endl;
    // cout<<"The value of a :  "<<***ptr2<<endl;

   
    return 0;
}