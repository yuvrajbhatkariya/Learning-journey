// use of open() function to open file :-
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    // writing in file :-
    ofstream write;
    write.open("Vednesday.txt");
    write<<"My name is Vednesday !\n";
    write<<"I am an ai which help you to solve your problem .\n";
    write<<"How may i help you ?\n";
    write.close();


    // reading in file :-
    ifstream read;
    string s;
    read.open("Vednesday.txt");
    // read>>s;
    while(read.eof() == 0){
        getline(read,s);
        cout<<s<<endl;
    }
    read.close();
    return 0;
}