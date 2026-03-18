#include<stdio.h>
int main(){
    // 1. While loop :-
    // int A = 1;
    // while(A<=20){
    //     printf("%d\n",A);
    //     A +=1;
    // }


    // FOR Loop :- 
    // int Y;
    // for(int X =1;X<=10;X++){
    //     Y = 9*X;
    //     printf("%d\n",Y);
    // }

    // DO While Loop :-
    int P = 1;
    do{
        printf("%d\n",P*9);
        P += 1;
    }while(P>10);             // here condition is false but it will run time 
    return 0;
}