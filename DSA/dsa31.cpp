// Recurssion : 

#include<iostream>
using namespace std;

// count 
void count(int i){
    if(i == 0){
        return ;
    }
    count(i - 1);
    cout<<i<<" ";
}

// Reverse counting :
void recount(int i){
    if(i == 0){
        return ;
    }
    cout<<i<<" ";
    count(i - 1);
}


// factorial : 
int factorial(int i){
    if(i == 0){
        return 1;
    }
    return i*factorial(i - 1);
}
int main(){
    int i;
    cin>>i;
    int a = factorial(i);
    cout<<a<<endl;

    count(i);
    cout<<endl;
    recount(i);
    return 0;
}
