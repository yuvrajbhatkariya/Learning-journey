// Initialisation in constructor :-
#include <iostream>
using namespace std;
class C
{
    int b;
    int a;

public:
    // C(int x, int y) : a(x), b(y)
    // C(int x, int y) : a(x), b(y+x)
    // C(int x, int y) : a(x), b(y*x)
    // C(int x, int y) : a(x), b(y-a)
    C(int x, int y) : b(y),a(x+y)
    // C(int x, int y) : b(y),a(b+y)
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};
int main()
{
    C y(8, 9);
    return 0;
}