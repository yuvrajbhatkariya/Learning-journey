// DYNAMIC initalization of object using constructor 


/*
    not a simple intrest its same like compound intrest
*/
#include<iostream>
using namespace std;
class simpleintrest{
    float principle,rate;
    int year;
    float total;
    public :
    simpleintrest(){}; 
/*
    --> it is necessary beacaue our constructor cannot decide which constrctor we choose first,
    if any enpty constructor is not there
*/

    simpleintrest(float p,int r, int y){
        float t;
        principle = p;
        rate = float(r)/100; ;      // here rate is in percent .. 
        year = y;
        total = t;
        total = principle;
        
        for (int i ; i<year ; i++){
            total = total*(1+rate);
        }
   }
    simpleintrest(float p,float R, int y){
        float t;
        principle = p;
        rate = R;                 // here rate in fraction ..
        year =  y;    
        total = t;
        total = principle;
        for (int i ; i<year ; i++){
            total = total*(1+rate);
        }
        
   }
    void show(){
        cout<<"The total amount recived after "<<year<< " year is : "<<total<<endl;
    }
};
int main(){
    float R,p,t;
    int y,r;
    cout<<"Enter the value of p,R and y : "<<endl;
    cin>>p>>R>>y;
    simpleintrest o1(p,R,y);
    o1.show();

    cout<<endl;

    cout<<"Enter the value of p,r and y : "<<endl;
    cin>>p>>r>>y;
    simpleintrest o2(p,r,y);
    o2.show();
    return 0;
}