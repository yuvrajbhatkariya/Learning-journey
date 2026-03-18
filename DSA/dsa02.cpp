// SOME PROBLEMS AND SOLUTION: -

#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=N+1-i;j++){
            cout<<j;
        }
        for(int j = 0;j< i-1;j++){
            cout<<"*";
        }
        for(int j = 0; j<i;j++){
            cout<<"*";
        }
        for(int j = 0;j<N-i+1;j++){
            cout<<N-i-j+1;
            
        }
        cout<<endl;
    }
    return 0;
}