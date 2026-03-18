#include <iostream>
using namespace std;
/* if base class is in private visibility than their members and function becomes private 
and can not be accesable by main function :-
*/
class base
{
    int d1;

public:
    int d2;
    void setdata()
    {
        d1 = 100;
        d2 = 900;
    }
    int getdata1(void)
    {
        return d1;
    }
    int getdata2(void)
    {
        return d2;
    }
};
// class derived : public base
class derived : private base
{
    int b1;
public:
    int b2;
    void process();
    void display();
    int privat(void){
        b1 = getdata1() + getdata2();
        return b1;
    }
};
void derived :: process(void)
{

    setdata();                                // if private:--> we can use it in any other function of class.

    b2 = d2*getdata1();
}
void derived :: display(){
    cout<<"The value of d1 is : "<<getdata1()<<endl;          
    cout<<"The value of d2 is : "<<d2<<endl;                  


    cout<<"The value of b1 is : "<<privat()<<endl;          
    cout<<"The value of b2 is : "<<b2<<endl;
}
int main()
{
    derived x1,x2,x3,x4;
    // x1.setdata();                             // we can not acess this if it is in private visibility.
    x1.process();
    x1.display();
    return 0;
}