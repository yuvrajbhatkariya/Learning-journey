// FUNCTORS : -
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int arr[] = { 23 ,14 ,74, 6, 4, 2};
    sort(arr,arr+5);                // sorting up to 5 position(ascending order)            {'algorithm'}
    sort(arr, arr+5, greater<int>());  // sorting upto 5 position (decending order)        {'functional'}
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}