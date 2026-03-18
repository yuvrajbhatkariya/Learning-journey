// **************/INHERITANCE syntax/********************//
#include <iostream>
using namespace std;

// Base class:
class Employee
{
    int a; // The base class private no. can not be inherited
public:
    int id;
    float sallary;

    Employee() {} // it is necessary to use because our constructor not identify
    Employee(int inpid)
    {
        id = inpid;
        sallary = 69;
    }
};

// derived class syntax:
/*
class {{derived class name}} : {{visibility mode}} {{base class name }}  {
    class/member/method....etc.
}

Note:-
1.default visibility mode is private .
2.public visibility mode : pubic member of base class become the public member of derived class.
3.private visiblity mode : public mrmber of bse class become the private membear of derived class.
*/
// class program : Employee{}                          // it is default derived class.
class program : public Employee
{
public:
    // inheritance :
    program(){}
    program(int inpid)
    {
        id = inpid;
        cout<<"The id of employee is : "<<id<<endl;
    }
    long long int phone = 7470713290;
    void getdata(int v)
    {
        cout << "your application no. is = " << v << endl;
    }
};
int main()
{
    Employee vansh(1), shreyas(2);
    cout << vansh.sallary << endl;
    cout << shreyas.sallary << endl;

    program v1, v2;
    cout << "The phone no. of employee is : "<<v1.phone << endl;
    v2.getdata(404);

    program v3 = program(106);
    return 0;
}