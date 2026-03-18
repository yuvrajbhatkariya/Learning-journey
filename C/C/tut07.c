// Function :-
#include<stdio.h>
int X = 45;                         // Globle variable 
int Ved(int a,int b){
    return a + b;
}
int Wed(int a,int b){
    return (float)((a + b)/2);
}
int main(){
    X= 96;
    // int num1 = 100, num2= 299;
    // printf("%d\n",Ved(100,200));
    // printf("%d\n",Wed(433,56));
    printf("%d\n",X);               // Local Variable 
    return 0;
}