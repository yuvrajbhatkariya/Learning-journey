// BooK Allocation : -
#include<iostream>
using namespace std;
bool solution(int arr[],int n, int m,int mid){
    int sum = 0, student = 1;
    for(int i = 0; i<n;i++){
        if(sum + arr[i] <= mid){
            sum += arr[i];
        }
        else{
            student++;
            if(arr[i]>mid || student > m){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;

}
int allocateBooks(int arr[],int n,int m){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum,s = 0;
    int mid = s + (e - s)/2;
    int ans = -1;
    if(n<m){
        return ans;
    }
    while(s <= e){
        if(solution(arr, n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int ved[4] = {12,34,67,90};
    cout<<allocateBooks(ved,4,2);
    return 0;
}