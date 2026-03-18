#include<iostream>  
using namespace std;
void input(int num[], int size){
    for(int i = 0; i<size; i++){
        cin>>num[i];
    }
}
void output(int num[], int size){
    for(int i = 0; i<size; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
void sum(int num[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + num[i];
    }
    cout<<"Sum : "<<sum<<endl;
}
void update(int num[],int size){
    num[0] = 106;
    for(int i = 0; i<size; i++){
    cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int size;
    cin>>size;
    int ved[100];
    input(ved,size);
    output(ved,size);
    sum(ved,size);
    update(ved,size);
    output(ved,size);
    return 0;
    
}