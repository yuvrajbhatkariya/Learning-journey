

// 1. Alterante array no. swapping : -

// #include<iostream>
// using namespace std;
// void set(int num[], int size){
//     for(int i = 0; i<size; i++){
//         cin>>num[i];
//     }
// }
// void swaping(int num[], int size){
//     for(int i = 1;i<size; i += 2 ){
//         // cout<<num[i]<< " ";
//         swap(num[i-1] ,num[i]);
//     }
// }
// void out(int num[], int size){
//     for(int i = 0; i<size; i++){
//         cout<<num[i]<<" ";
//     }
// }
// int main(){
//     int ved[100];
//     int size;
//     cin>>size;
//     set(ved,size);
//     swaping(ved,size);
//     out(ved,size);
//     return 0;
// }



// // 2. find unique in array:-
// #include<iostream>
// using namespace std;
// int main(){
//     int t,N;
//     cin>>t;
//     for(int i = 0; i<t;i++){
//         cin>>N;
//         int ved[100];
//         for(int i = 0; i<N;i++){
//             cin>>ved[i];
//         }
//         for(int i = 0; i<N;i++){
//             int count = 0;
//             for(int j = 0; j<N;j++){
//                 if(ved[i] == ved[j]){
//                     count++;
//                 }
//             }
//             if(count<2){
//                 cout<<ved[i]<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }


// 3. find duplicate : -

// #include<iostream>
// using namespace std;
// int main(){
//     int t, N;
//     cin>>t;
//     for(int i = 0; i<t;i++){
//         cin>>N;
//         int arr[1000];
//         for(int i = 0; i<N; i++){
//             cin>>arr[i];
//         }
//         for(int i = 0; i<N;i++){
//             int count = 0;
//             for(int j = 0; j<N; j++){
//                 if (arr[i]== arr[j]){
//                     count++;
//                 }
//             }
//             if(count==2){
//                 cout<<arr[i]<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// 4.
#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int ved[1000] = {4,3,2,7,8,2,3,1};
    int ans = 0;

    for(int i = 0; i< n; i++){
        ans = ans^ved[i];
    }
    for(int i = 0;i<n;i++){
        ans = ans^ved[i];
    }
    cout<<ans;
    return 0;
}