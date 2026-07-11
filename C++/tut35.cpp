// *************/Distructor/****************//
#include<iostream>
using namespace std;
int cnt= 0;
class ved{
    public :
    ved(){
        cnt++;
        cout<<"constructor is called : "<<cnt<<endl;
    }
    ~ved(){
        cout<<"destructor is called :"<<cnt<<endl;
        cnt--;
    }
};
int main(){
    cout<<"Entering a main function ."<<endl;
    cout<<"Creating a first object ."<<endl;
    ved v1;
    {
        cout<<"Entering a block ."<<endl;
        cout<<"Creting two more objct"<<endl;
        ved v2,v3;
        cout<<"Exiting a block"<<endl;
    }
    cout<<"back to main function ."<<endl;
    cout<<"local variable "<<cnt<<endl;        // having local variable values. 
    cout<<"Global variable "<<::cnt<<endl;     // not giving actual globak values 
    return 0;
}