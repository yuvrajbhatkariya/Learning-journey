#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1330;
    int a = 100;
    switch(a){
        case 100:
            if(n/100 != 0){
                cout<<"100 --> "<<(n/100)<<endl; 
                n = n - ((n/100)*100);
            }
        case 50:
            if(n/50 != 0){
                cout<<"50 --> "<<(n/50)<<endl; 
                n = n - ((n/50)*50);
            }
        case 20:
            if(n/20 != 0){
                cout<<"20 --> "<<(n/20)<<endl; 
                n = n - ((n/20)*20);
            }
        case 1:
            if(n/1 != 0){
                cout<<"1--> "<<(n/1)<<endl; 
                n = n - ((n/1)*1);
            }
        default:
            cout<<"jai mata ji"<<endl;
        
            

        

            
    }
}