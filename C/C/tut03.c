// OPERATORS :- 
#include<stdio.h>
int main(){

    // Types of operators :-
    // 1. Arithematic operator :-
    // unsigned int A = 4,B = 5;
    // unsigned c = A-B;
    // printf("The value of A + B is       : %d\n",A+B);
    // printf("The value of A - B is       : %d\n",A-B);
    // printf("The value of A * B is       : %d\n",A*B);
    // printf("The value of A / B is       : %d\n",A/B);
    // printf("The value of A modulo B is  : %d\n",A % B);      // This will not work in case of FLOAT
    // printf("The value of A++ is         : %d\n",A++);
    // printf("The value of ++A is         : %d\n",++A);
    // printf("The value of --A is         : %d\n",--A);
    // printf("The value of A-- is         : %d\n",A--);
    // printf("The vlue of c is            : %d\n",A-B);            // This give an unsigned value

    // 2.Relation or Comparison operators :-
    // printf("%d\n",A==4);
    // printf("%d\n",A==B);
    // printf("%d\n",A>B);
    // printf("%d\n",A<B);
    // printf("%d\n",A!=B);

    // 3.Logical Operator:-
    // int A = 0,B=1;
    // printf("%d\n",A&&B);
    // printf("%d\n",A||B);
    // printf("%d\n",!A);
    // printf("%d\n",!B);

    // Bitwise operator :-
    // int X = 14 , Y = 34;
    // printf("%d\n",X & Y);
    // printf("%d\n", ~Y);
    // printf("%d\n",X >> Y);
    // printf("%d\n",X << Y);

    // 4. Assignment Operator :-
    // += -= *= /= %=
    int P = 12,Q = 13;
    P += 1;
    printf("%d\n",P);
    P -= 1;
    printf("%d\n",P);
    P *= 1;
    printf("%d\n",P);
    P /= 3;
    printf("%d\n",P);
    P %= 3;
    printf("%d\n",P);
    return 0;
}