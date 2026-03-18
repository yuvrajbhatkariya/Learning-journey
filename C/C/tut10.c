#include<stdio.h>
#include<string.h>
int main(){
    // char A[7] = {'y','u','v','r','a','j','\0'};
    // printf("%s\n",A);
    char x[12],y[15],z[45];
    // strcpy(x,A);
    strcpy(x,"harry");
    strcpy(y,"Vednesday");
    // printf("%s\n",x);
    // printf("%s",y);
    // strcat(x,y);
    printf("%s",strcmp(x,y));
    return 0;
}