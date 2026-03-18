// Array of Objects Using Pointers:-
#include<iostream>
using namespace std;
class mall{
    int id;
    float price;
    float static Total;
    public:
    int count = 1;
    void set(int a,float b){
        id = a;
        price = b;
    }
    void get(void){
        cout<<"The id of product " <<count<<" is : "<<id<<endl;
        cout<<"The price of product " <<count<<" is : "<<price<<endl;
        count++;
    }
    void total(void){
        Total = Total + price;
        // cout<<Total<<endl;
    }
    void getT(void){
        cout<<"Tolal : "<<Total<<endl;
    }
};
float mall :: Total = 0;
int main(){
    int p,items = 3;
    float q;
    mall *m = new mall[items];
    mall *n = m;             // here we make another pointer wich holds the address of pointer
    cout<<"Enter the poduct id and price : "<<endl;
    for(int i = 0;i <items ; i++){
        cin>>p>>q;
        m->set(p,q);
        m++;
    }
    for(int i = 0;i<items;i++){
        n->get();
        n->total();
        n++;
    }
    n->getT();
    return 0;
}