#include <iostream>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0;i<n -1;i++){

        int  j = i;
        for(int k = i+1; k<n;k++){
        if (arr[j] > arr[k]) {
            j = k;
        }    
        }
        swap(arr[i],arr[j]);
    }
}
int main(){
    int T,n;
    cin>>T;
    for(int i = 0; i<T;i++){
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        selectionSort(arr,n);
        for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}