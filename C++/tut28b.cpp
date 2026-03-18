#include<iostream>
using namespace std;
class w;
class v{
    int x;
    friend void display(v &, w &);
    public:
    void set(int a){
        x = a;
    }
};
class w{
    int y;
    friend void display(v &, w &);
    public :
    void set(int b){
        y = b;
    }
};
void display(v & o1, w & o2){
    int temp = o1.x; 
    o1.x = o2.y;
    o2.y = temp;
    cout<<"The value of c1 is : "<<o1.x<<endl;
    cout<<"The value of c2 is : "<<o2.y<<endl;
}
int main(){
    v c1;
    w c2;
    c1.set(45);
    c2.set(56);
    display(c1,c2);
    return 0;
}