#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class simple{
    protected:
    int a,b;
    char c;
    public :
    simple(void ){
        cin>>a>>b>>c;
        switch(c){
            case '+':
            cout<<a+b<<endl;
            break;
            case '-':
            cout<<a-b<<endl;
            break;
            case '*':
            cout<<a*b<<endl;
            break;
            case '/':
            if(b == 0){
                cout<<"not defined !"<<endl;
            }
            else{
                cout<<a/b<<endl;
            }
            break;
            default:
            cout<<"Not a valid operation."<<endl;
            break;
        }
    }
};



class S{
    int x,y;
    string z;
    public:
    S(void){
        cin>>x>>y>>z;
        if(z == "sin"){
            cout<<sin(x)<<" "<<sin(y)<<endl;
        }
        else if(z == "cos"){
            cout<<cos(x)<<" "<<cos(y)<<endl;
        }
        else if(z == "tan"){
            cout<<tan(x)<<" "<<tan(y)<<endl;
        }
        else if(z == "sqrt"){
            cout<<sqrt(x)<<" "<<sqrt(y)<<endl;
        }
        else{
            cout<<"Not a valid operator."<<endl;
        }
        // cout<<"yeh boi. "<<endl;
    }

};
class calculator : protected simple, protected S{
    public:
    void display(void){
        // simple();
        // S();
    }
};
int main(){
    // simple o;
    // S o;
    
    calculator p;
    p.display();
    return 0;
}