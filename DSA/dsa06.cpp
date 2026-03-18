// Decimal to binary :

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, bin = 0;
//     cin>>n;
//     for (int i = 0; n != 0; i++)
//         {
//             int bit = n & 1;
//             bin = (bit * (pow(10, i))) + bin;
//             n = n >> 1;
//         }
//     cout<<bin<<endl;
//     return 0;
// }


//  Binary to decimal :

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int d,dic = 0;
//     cin>>d;
//     for(int i = 0; d != 0;i++){
//         dic = (d%10 )*pow(2,i) + dic;
//         d = d/10;
//     }
//     cout<<dic<<endl;
//     return 0;
// }


#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void decimal_to_binary(int arr[],int &i,int n){
    while(n != 0){
        if(n%2 == 0){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
        i++;
        n = n/2;
    }
}

int binary_to_decimal(string s){
    int ans = 0;
    int k = 0;
    for(int i = s.length()-1; i>=0 ;i--){

        if(s[i] != '1' && s[i] != '0'){   // cheking binary or not
            return -1;
        }
        if(s[i] == '1'){
            int p = (pow(2,k));
            ans = ans + p;
        }
        k++;
    }
    return ans;
}
int main(){
    int arr[8] = {0};
    
    int choose;
    cout<<"Binary to Decimal : 0"<<endl;
    cout<<"Decimal to Binary : 1"<<endl;
    cin>>choose;
    if(choose == 1){
        int n;
        int index = 0;
        cout<<"Enter a Decimal no. : ";
        cin>>n;
        decimal_to_binary(arr,index,n);
            for(int i = index-1; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    }
    else{
        string str;
        cout<<"Enter a binary no : ";
        cin>>str;
        int a = binary_to_decimal(str);
        cout<<"Decimal  : "<<a;
    }
    cout<<endl;
    return 0;
}