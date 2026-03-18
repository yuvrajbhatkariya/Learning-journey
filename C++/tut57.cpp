#include<iostream>
// #include<cstring>
using namespace std;
class cody{
    protected:
    string title;
    float rating;
    public:
    cody(string t, float r){
        title = t;
        rating = r;
    }
    virtual void display(){cout<<"not bad"<<endl;}
};
class Vcody: public cody{
    protected:
    float vl;
    public :
    Vcody(string vt,float vr,float l): cody(vt,vr){
        vl = l;
    }
    void display(void){
        cout<<"The tile of this vedio is : "<<title<<endl;
        cout<<"The rating of this vedio is : "<<rating<<" minutes"<<endl;
        cout<<"The length of this vedio is : "<<vl<<endl;
    }
};
class Wcody: public cody{
    protected:
    int words;
    public:
    Wcody(string wt,float wr,float w): cody(wt,wr){
        words = w;
    }
    void display(void){
        cout<<"The tile of this website is : "<<title<<endl;
        cout<<"The rating of this website is : "<<rating<<endl;
        cout<<"The words length of this website is : "<<words<<endl;
    }

};
int main(){
    string T = "Hello World";
    float R = 4.91;
    float L = 20.45;
    int W = 1000;

    // cody c(T,R);
    // c.display();
    Vcody V1(T,R,L);
    // V1.display();
    Wcody V2(T,R,W);
    // V2.display();

    cody *C[2];
    C[0] = &V1;
    C[1] = &V2;


    // if we not use virtual class it only execute an base class(cody) finction (display).
    C[0]->display();
    C[1]->display();

    return 0;
}