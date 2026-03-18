#include<iostream>
using namespace std;
bool isfound(int arr[][4], int target,int row, int column){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
void arrsum(int arr[][4],int row,int column){
    for(int i = 0; i<column; i++){
        int sum = 0;
        for(int j = 0; j<row;j++){
           sum = sum+ arr[j][i];
        }
        cout<<sum<<" ";
    }
}
int main(){
    int A[3][4];
    // int A[3][3] = {1,2,3,4,5,6,7,8,9};
    // int B[3][4] = {{2,3,4,5},{9,9,9,9},{1,1,1,1}};
    // for(int i = 0; i<3;i++){
    //     for(int j = 0 ;j<3;j++){
    //         cout<<A[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<" --------->"<<endl;

    for(int i = 0; i<3;i++){
        for(int j = 0 ; j<4;j++){
            cin>>A[i][j];
        }
    }
    cout<<endl;


    for(int i = 0; i<3;i++){
        for(int j = 0 ;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum : ";
    arrsum(A,3,4);
    // int t;
    // cout<<"Enter the target value : ";
    // cin>>t;

    // if(isfound(A,t,3,4)){
    //     cout<<"Target found !!!!!!!"<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }
    return 0;
}