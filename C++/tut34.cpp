// Copy constructor: -

#include<iostream>
using namespace std;
class number{
    int a ;
    public :
    number(){};
    number(int num){
        a = num;
    }

    //copy conststructor :-> if copy constructor is not there than it can work because compilere made a default constructor copy without giving an error.

    number(number &op){     
        a = op.a;
    }
    void display(){
        cout<<"The value of copy constructor is : "<<a<<endl;
    }
    
};

int main(){
    number o1,o2(69),o3(45),z1;
    o1.display();
    o1 = o2;
    o1.display();
    o3.display();
    z1 = o3;
    z1.display();
    number z2(o2);
    z2.display();
    return 0;
}