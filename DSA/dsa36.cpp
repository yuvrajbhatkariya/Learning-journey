// #include<bits/stdc++.h>
// using namespace std;
// int partition(int arr[],int s, int e){


//     // make a partion :-
//     int count = 0;
//     int pivot = arr[s];
//     for(int i = s + 1;i<=e; i++){
//         if(arr[i]<=pivot){
//             count++;
//         }
//     }
    
    
//     int pivotIndex = s + count ;
//     swap(arr[pivotIndex],arr[s]);

//     // left and right value:-
// z
//     int i = s , j = e;
//     while(i<pivotIndex && pivotIndex<j){
//         while(arr[i]<pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//    }
//    return pivotIndex;
// }
// void quickSort(int arr[], int s , int e){

//     if(s>=e){
//         return ;
//     }

//     int p = partition(arr,s,e);

//     // Left Sort:-

//     quickSort(arr,s,p - 1);


//     // Right sort:-

//     quickSort(arr,p+1,e);
// }

// int main(){
//     int arr[7] = {3, 7, 8, 24 ,2, 5, 1};
//     int s = 0, e = 7 - 1;
//     quickSort(arr,s,e);
//     for(int i = 0; i <=e; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl<<e<<endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    // Make a partition:
    int count = 0;
    int pivot = arr[s];
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Left and right value:
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }

    int p = partition(arr, s, e);

    // Left Sort:
    quickSort(arr, s, p - 1);

    // Right sort:
    quickSort(arr, p + 1, e);
}

int main() {
    // int arr[7] = {3, 7, 8, 24, 2, 5, 1};
    int arr[8] = {23,53,2,16,10,29,5,8};
    int s = 0, e = 7;
    quickSort(arr, s, e);
    for (int i = 0; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
