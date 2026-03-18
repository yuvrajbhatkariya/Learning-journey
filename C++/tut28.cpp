#include<iostream>
using namespace std;
class wed;
class ved{
    int x;
    public:
    friend void Rin(ved v1 ,wed v2);
    void setdata(int a){
        x = a;
    }
};
class wed{
    int y;
    public :
    friend void Rin(ved v1 ,wed v2);
    void setdata(int b){
        y = b;
    }
};
void Rin(ved v1, wed v2){
    cout<<"The sum of number is : "<<v1.x + v2.y<<endl;
}
int main(){
    ved s1;
    wed s2;
    s1.setdata(2);
    s2.setdata(5);
    Rin(s1,s2);
    return 0;
}