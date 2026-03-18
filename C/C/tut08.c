#include<stdio.h>
int main(){
    // int A[100] = {1,2,3,4,5,6,7,8,9,10};
    // printf("%d\n",A[3]);
    int B[5];

    for (int i = 0; i<5;i++){
        printf("Enter num %d\n",i);
        scanf("%d",&B[i]);
    }

    return 0;
}