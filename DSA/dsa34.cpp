#include<iostream>
#include<string>
using namespace std;

// Checking Palindrome :-
bool CheckPalindrome(string &str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!= str[e]){
        return false;
    }
    else{
        return CheckPalindrome(str,s+1,e-1);
    }
    return CheckPalindrome(str,s,e);
}

// Reverse a string :-
void reverse(string &str,int s,int e){
    if(s>e){
        return ;
    }
    swap(str[s],str[e]);
    return reverse(str,s + 1,e-1);
}

// Finding power of a no. :-
int power(int a,int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    int ans = power(a,b/2);
    if(b%2 == 0){
        return ans * ans;
    }
    else{

        return a*ans*ans;

    }
}

// Bubble sort:-

void bubbleSort(int arr[],int n){
    if(n == 0 || n == 1){
    return;
    }
    for(int i = 0; i<n-1;i++){
        if(arr[i]>arr[i + 1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
    
}
int main(){
    string str;
    // cin>>str;
    // int s = 0,e = str.length() - 1;
    // reverse(str,s,e);
    // cout<<str<<endl;;

    // if(CheckPalindrome(str,s,e)){
    //     cout<<"Given string is a Palindrome";
    // }
    // else{
    //     cout<<"Given string is not a Palindrome";
    // }
    // int a,b;
    // cin>>a>>b;
    // cout<<"--->"<<power(a,b);


    int arr[5] = {2,5,6,3,1};
    bubbleSort(arr,5);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}