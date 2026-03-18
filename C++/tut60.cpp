#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // // Creating and Writing in a file : -
    // string s = "hi buddy !";
    // ofstream out("data1.txt");
    // out<<s;

    string s1;
    ifstream in("data2.txt");
    // in>>s1;
    // cout<<s1;              // only one word print 
    getline(in , s1);         // print line by line 
    getline(in , s1);
    getline(in , s1);
    cout<<s1;
    return 0;
}