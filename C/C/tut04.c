#include<stdio.h>
int main(){

    // *********/Taking input from user/**********
    // char A[1000];
    // printf("Enter your name : ");
    // scanf("%s",&A);
    // printf("Good Morning ! %s\n Have a nice day.\n",A);
    
    // *********/Type Casting/**********
    int a , b;
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    printf("%f\n",(float)a);
    printf("%d\n",b);
    printf("%f\n",(float)a/b);
    printf("%d\n",b/a);
    return 0;
}