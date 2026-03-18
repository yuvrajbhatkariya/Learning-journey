#include<iostream>
#include<math.h>
using namespace std;
class point{
    int a,b;
    public:
    friend void sum(point o1, point o2);
    void set(void){
        int x,y;
        cin>>x;
        cin>>y;
        a = x;
        b = y;
    }
    void show(void){
       cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }
};
void sum(point o1 ,point o2){
    cout<<"The distance between point is : "<<(sqrt(pow((o1.a-o2.a),2) + pow((o1.b - o2.b),2)));
}
int main(){
    point v1,v2,ved;
    v1.set();
    // v1.show();
    v2.set();
    // v2.show();
    sum(v1,v2);
    // v3 = sum(v1,v2);
    return 0;
}