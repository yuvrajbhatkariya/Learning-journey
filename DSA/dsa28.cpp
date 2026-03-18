// REFERENCE VARIABLE :-)

#include<iostream>
using namespace std;

//Pass by value :
void update1(int i){
    i++;
}

//Pass by Reference : 
void update2(int& i){
    i++;
}

int sum(int *arr,int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += arr[i];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];         // creating a dynamic memory 
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

/*
    // creating a reference variable :-
    int &x = a;

    cout<<x<<endl;
    cout<<a<<endl;
    a++;
    cout<<x<<endl;


    cout<<endl<<"Value of a before update1 : "<<a<<endl;
    update1(a);
    cout<<"Value of a after update1 : "<<a<<endl<<endl;

    
    cout<<"Value of a before update2 : "<<a<<endl;
    update2(a);
    cout<<"Value of a after update2 : "<<a<<endl<<endl ;
*/
    int ans = sum(arr,n);

    cout<<"Sum : "<<ans<<endl;

    return 0;

}