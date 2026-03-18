#include<iostream>
using namespace std;
void merge(int arr[],int s, int e){
    int mid = s - (e + s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // Copy values 
    int index = s;
    for(int i = 0; i<len1; i++){
        arr1[i] = arr[index++];
    }
    
    index = mid+1;
    for(int i = 0; i<len2;i++){
        arr2[i] = arr[index++];
    }

    // merege two sorted array:
    int index1 = 0;
    int index2 = 0;
    index = s;

    while(index1<len1 && index2 <len2){
        if(arr1[index1]< arr2[index2]){
            arr[index++] = arr1[index1++];
        }
        else{
            arr[index++] = arr2[index2++];
        }
    }

    while(index<len1){
        arr[index++] = arr1[index1++];
    }
    while(index<len2){
        arr[index++] = arr1[index2++];
    }
}
void mergeSort(int arr[],int s,int e){
    int mid = s + (e - s)/2;
    if(s>=e){
        return ;
    }
    // left
    mergeSort(arr,s,mid);

    // Right 
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int arr[5] = {2,8,6,4,7};
    int s = 0,e = 4;
    mergeSort(arr,s,e);
    return 0;
}