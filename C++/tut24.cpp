//*************Static data member and function ******************//
#include <iostream>
using namespace std;
class Employee
{
    int id;
    // Static Member 
    int static count;                                     // It can used by all the objects in a class.

public:
    void setdata()
    {
        cout << "Enter a id no. : ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The id of employee no. " << count << " is " << id << endl;
    }
    static void New(void){
        // cout<<id<<endl;                                 // here we use only static member :
        cout<<"The no. of count is : "<<count<<endl;
    }
};
int Employee ::count;                                      // Ii is initalize by 0
int main()
{
    Employee Vansh, Shreyas;
    Vansh.setdata();
    Vansh.getdata();
    Employee :: New();

    Shreyas.setdata();
    Shreyas.getdata();
    Employee :: New();
    return 0;
}