// *************/Distructor/****************//
#include<iostream>
using namespace std;
int count= 0;
class ved{
    public :
    ved(){
        count++;
        cout<<"constructor is called : "<<count<<endl;
    }
    ~ved(){
        cout<<"destructor is called :"<<count<<endl;
        count--;
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
    cout<<"local variable "<<count<<endl;        // having local variable values. 
    cout<<"Global variable "<<::count<<endl;     // not giving actual globak values 
    return 0;
}