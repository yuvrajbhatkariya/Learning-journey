#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    string greet = "IIITNR";
    int Class;

public:
    string name;
    int roll_no, age;
    float marks;
    char grade;
    string x;
    void Ved();
    void Wed();
};
void student ::Wed()
{
    cout << greet << endl;
    ;
    cout << "Class       : " << Class << endl;
    cout << "Name        : " << name << endl;
    cout << "Roll number : " << roll_no << endl;
    cout << "Marks       : " << marks << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Decision    : " << x << endl;
}
int main()
{
    // std :: cout<<"hekki";
    student Yuvraj;
    Yuvraj.x = "Pass";
    Yuvraj.roll_no = 3;
    Yuvraj.Ved();
    Yuvraj.Wed();
    return 0;
}
void student ::Ved()
{
    Class = 1;
    name = "Yuvraj";
    marks = 69.999;
    grade = 'B';
}