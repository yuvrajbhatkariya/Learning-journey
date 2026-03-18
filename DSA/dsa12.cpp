// Binary search :-)

#include<iostream>
using namespace std;
int binary(int arr[],int size ,int key){
    int start = 0,end = size -1;
    // int mid = (start+end)/2;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid=1;
        }
        if(arr[mid]<key){
            start = mid +1;
        }
        // mid = (start + end)/2;
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int even[6] = {11,22,33,44,55,66};
    int odd[7] = {21,22,23,24,25,26,27};

    int ev = binary(even , 6, 55);
    cout<<ev<<endl;
    int od = binary(odd , 7, 27);
    cout<<od<<endl;
    return 0;
}