// USING OF ARRAY IN CLASS:-
#include<iostream>
using namespace std;
class shop{
    int ProductId[100];
    int ProductPrice[100];
    int counter;
    int z;
    public:
    void Count(void){counter = 0;}
    void setprice(void);
    void displayprice(void);
    void total(void);
}; 
void shop :: setprice(){
    cout<<"Enter a id no. of product "<<counter +1<<" : "<<endl;
    cin>>ProductId[counter];
    cout<<"Enter a product "<<counter +1<<" price : "<<endl;
    cin>>ProductPrice[counter];
    counter++;
}
void shop :: displayprice(){
    for(int i = 0; i < counter ; i++){
        cout<<"Price of Product "<<i+1<<" of ID no. "<<ProductId[i]<<" is : "<<ProductPrice[i]<<endl;
        z = ProductPrice[i] + z;
    }
}
void shop :: total(){
    cout<<"\nTota items  : "<<counter<<endl;
    cout<<"Total Price : "<<z<<endl;
}
int main(){
    shop s;
    char a;
    cout<<"Hello sir/mam "<<endl;
    for(int i ; i < 1000; i++){
        cout<<"Do you want to add items(if yes than type 'Y' or type anything for exit) "<<endl;
        cin>>a;
        if (a == 'Y'){
            s.setprice();
        }
        else{
            break;
        }
    }
    cout<<endl<<endl<<endl;
    s.displayprice();
    s.total();
    return 0;
}