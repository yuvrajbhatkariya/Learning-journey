//*******************/Proted Member/*******************
#include <iostream>
using namespace std;
class base
{
private:                         // it can not be inherited nor be accesable.
    int a;

protected:                       // it can be inherited but can not accesable by main function.
    int b;

public:                         // it can be inherited as well as accesable but it become private for derived.
    int c = 69;
    base(){};
    base(int n);
};
base ::base(int n)
{
    a = n;
    cout << "The value of  a is : " << a << endl;
}
class derived : protected base
{                               // it is protected it can be inherited but can not accesable by main function.
    int b = 02;

public:
    int d = 106;
    derived()
    {
        base(56);
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
    }
};
int main()
{
    derived x1;
    cout << "The value of d is : " << x1.d << endl;
    return 0;
}