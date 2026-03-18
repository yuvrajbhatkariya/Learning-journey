#include<iostream>
using namespace std;
int a = 5;
int main(){
    int a = 45;
    cout<<"The value of local variable is "<<a<<endl;
    cout<<"The value of Global variable is "<<::a<<endl;
    return 0;
}