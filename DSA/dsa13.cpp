#include <iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s,int e, int k)
{
    int mid = s + (e -s )/2;
    while( s <= e){
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid] < k){
            s = mid + 1;
        }
        if(arr[mid]> k){
            e = mid - 1;
        }
        mid = s + (e - s )/2;
    }
    return -1;
}
int sorted(int arr[],int n,int k){
    int p = pivot(arr,n);
    int s = 0,e = n-1;
    if(arr[p]<=k && arr[e]>=k){
        return binarySearch(arr,p,n-1,k);
    }
    else{
        return binarySearch(arr,s,p-1,k);
    }
    return -1;
}
int main()
{
    int size = 5;
    int ved[size] = {12, 15, 18, 2, 4};
    // int ved[size] = {27,28,29,32,48};
    // cout << pivot(ved, 5);
    // cout << binarySearch(ved, 5,480);
    cout<<sorted(ved,5,4);
    return 0;
}