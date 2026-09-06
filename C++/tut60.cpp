#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // // Creating and Writing in a file : -
    string s1 = "hi buddy !";
    ofstream out("data1.txt");
    out<<s1;

    // string s1;
    ifstream in("data1.txt");
    in>>s1;
    // cout<<s1;              // only one word print 
    // getline(in , s1);         // print line by line 
    // getline(in , s1);
    // getline(in , s1);
    // cout<<s1;
    return 0;
}