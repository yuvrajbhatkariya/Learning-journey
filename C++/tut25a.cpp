#include<iostream>
using namespace std;
class Dsai{
    int id;
    char V;
    // int x = 1000;
    public:
    void setdata(){
        cout<<"Enter a student id : ";
        cin>>id;
        cout<<"Enter a student Grrade  : ";
        cin>>V;

    }
    void getdata(){
        cout<<"The marks of student id "<<id<<" is : "<<V<<endl;
        // cout<<x<<endl;
        cout<<endl;
        
    }

};
int main(){
    int a;
    cout<<"Enter how many number of student grade you want to enter : ";
    cin>>a;
    cout<<endl;
    Dsai S[a];
    for(int i = 0; i<a;i++){
        S[i].setdata();
        S[i].getdata();
    }
    return 0;
}