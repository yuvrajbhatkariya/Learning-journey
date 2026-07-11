//*******************/FRIEND CLASS and MEMBER FUNCTION/****************//
#include<iostream>
using namespace std;
class Complex;
class New{
    public:
    int sumre(Complex , Complex);
    int sumco(Complex , Complex);
};
class Complex{
    int a,b;
    public:

    // individual delaration for acess :
    // friend int New :: sumre(Complex , Complex);
    // friend int New :: sumco(Complex , Complex);

    // for whole class acess :
    friend New;
    void setnumber(int v1 ,int v2){
        a = v1;
        b = v2;
    }
    void show(){
        cout<<"Complex no. : "<<a<<" + i"<<b<<endl;
    }
};
int New :: sumre(Complex o1 , Complex o2){
    return (o1.a + o2.a);
}
int New :: sumco(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

int main(){
    Complex c1,c2;
    c1.setnumber(4,5);
    c1.show();
    c2.setnumber(6,4);
    c2.show();

    New g1,g2;
    int reco = g1.sumre(c1,c2);
    int coco = g1.sumco(c1,c2);
    cout <<"The sum of real part of Complex no. is    : ";
    cout<<reco<<endl;
    cout <<"The sum of Complex part of Complex no. is : ";
    cout<<coco<<endl;

}