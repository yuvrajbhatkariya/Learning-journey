#include <iostream>
using namespace std;
template <class t1, class t2>
class buddy
{
    t1 a;
    t2 b;
    float avg;

public:
    buddy(t1 a, t2 b)
    {
        this->a = a;
        this->b = b;
    }
    float average(void);
};
template<class t1,class t2>        
/*
we have to write this because function is related to the class and without this 
function do not identify the data type.
*/
float buddy<t1,t2> :: average(void)
{
    avg = (a + b) / 2;
    return avg;
}



// CONCEPT OF OVERLOADING IN FUNCTON USING TEMPLATE :-
template <class T>
void ved(T a){
    cout<<"The value of a with diffrent parameter(datatype) is  : "<<a<<endl;
}
void ved(int a){
    cout<<"The value of a with constant parameter(datatype) is  : "<<a<<endl;
}
int main()
{
    float a;
    buddy b1(2.00, 7.00);
    a = b1.average();
    cout <<"The avg is : "<< a<<endl;
    ved(5);      // here priority goes to exact datatype function .
    ved(3.55);
    return 0;
}