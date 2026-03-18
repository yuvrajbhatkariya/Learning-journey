#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    string s = "Hello, my name is vednesday.";
    ofstream in("Vednesday.txt");
    in<<s;


    // MISSION UNSUCESSFULL : -
    // cin>>s;
    // in<<s<<" ";
    // getline(in, s);
    // in<<"My name is : "<<s;
    // cout<<"Enter no. of words you want write : "<<endl;
    // cin>>n;
    // cout<<"start -->"<<endl;
    // cin>>s;
    // for(int i = 0;i<n ;i++){
    //     in<<s<<" ";
    // }
    in.close();


    string r;
    ifstream out("Vednesday.txt");
    // out>>r;
    getline(out,r);
    cout<<"content ---> "<<endl<<r;
    out.close();
    return 0;
}