// Comments and Varianble and datatype :
#include<stdio.h>
int main (){

    // Variable :-
    // int a = 5;         // variable initalisation and declaration;
    // float b = 30.04;
    // char v = 's';
    // char f[20] = "vednesday";
    // printf("%d\n",a);
    // printf("%f\n",b);
    // printf("%c\n",v);
    // printf("%s\n",f);

    // const int a = 10;
    // a = 4;                // ERORR :- 

    // Datatype :-
    int a = 7;
    unsigned int a1 = 7;
    long int a2 = 7;
    short int a3 = 7;

    float b = 1.9;
    double b1 = 1.99;
    long double b2 = 1.999999;

    char c = 'V';
    char c1[100] = "ghghgnnvjvj";

    printf("The size of int is          : %d\n",sizeof(a));
    printf("The size of unsigned int is : %d\n",sizeof(a1));
    printf("The size of long int is     : %d\n",sizeof(a2));
    printf("The size of short is        : %d\n",sizeof(a3));
    printf("The size of float is        : %d\n",sizeof(b));
    printf("The size of double is       : %d\n",sizeof(b1));
    printf("The size of long double is  : %d\n",sizeof(b2));
    printf("The size of cahr is         : %c\n",sizeof(c));
    printf("The size of cahr[100] is    : %d\n",sizeof(c1));
    return 0;
}