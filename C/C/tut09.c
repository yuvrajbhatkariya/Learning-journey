#include<stdio.h>
int main(){
    int A = 100;
    int* B = &A;
    int** C = &B;
    printf("The adress of A %d is\n",&A);   // Refrencing 
    printf("The adress of A %d is\n",B);
    printf("The adress of A %d is\n",&B);
    printf("The adress of A %d is\n",C);
    printf("The value at A %d is\n",A);    // Derefrencing
    printf("The  value of  A %d \n",*B);
    printf("The  value A %d \n",**C);

    return 0;
}