//*******************/FRIEND CLASS and MEMBER FUNCTION/****************//
#include<iostream>
using namespace std;
class complex;
class New{
    public:
    int sumre(complex , complex);
    int sumco(complex , complex);
};
class complex{
    int a,b;
    public:

    // individual delaration for acess :
    // friend int New :: sumre(complex , complex);
    // friend int New :: sumco(complex , complex);

    // for whole class acess :
    friend New;
    void setnumber(int v1 ,int v2){
        a = v1;
        b = v2;
    }
    void show(){
        cout<<"complex no. : "<<a<<" + i"<<b<<endl;
    }
};
int New :: sumre(complex o1 , complex o2){
    return (o1.a + o2.a);
}
int New :: sumco(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main(){
    complex c1,c2;
    c1.setnumber(4,5);
    c1.show();
    c2.setnumber(6,4);
    c2.show();

    New g1,g2;
    int reco = g1.sumre(c1,c2);
    int coco = g1.sumco(c1,c2);
    cout <<"The sum of real part of complex no. is    : ";
    cout<<reco<<endl;
    cout <<"The sum of complex part of complex no. is : ";
    cout<<coco<<endl;

}