#include<stdio.h>
int main(){

    // 1. **********/If else statement :-/*************
    int A;
    printf("Enter your age : ");
    scanf("%d",&A);
    // if (A < 18){
    //     printf("You can not drive a car.");
    // }
    // else if (A>=18 && A<= 24){
    //     printf("You can definitely drive a car.");
    // }
    // else{
    //     printf("You can drive a car : ");
    // }

    // ************/SHORTCUT FOR if else:/****************
    int Z = A>12?1:0;
    printf("%d",Z);


    // **********/2.switch Case statement :-/**************
    // int A;
    // printf("Enter your age : ");
    // scanf("%d",&A);
    // switch(A){
    //     case (18):
    //     printf("You should watch anime.");
    //     break;
    //     case (0):
    //     printf("Don't be over smart.");
    //     break;
    //     case(100):
    //     printf("You don't have much time ,so wait for your death");
    //     break;
    //     case (50):
    //     printf("Half of your life has been gone so do not further waste time and watch anime ");
    //     break;
    //     default:
    //     printf("You can watch anime ");
    //     }
    return 0;
}