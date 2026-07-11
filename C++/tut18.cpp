//  inline function is a function whose code is inserted directly at the place where it is called, avoiding the overhead of a normal function call and improving performance for small functions.
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}
 
int main() {
    cout << square(5)<<endl;
    return 0;
}