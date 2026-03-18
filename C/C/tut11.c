// **************/STRUCTURE/************** 
#include <stdio.h>
typedef struct student
{
    char* A;
    int age;
    float marks;
    char grade;
}st;
int main(){
    st Y;
    Y.A = "Yuvraj" ;
    Y.age = 19;
    Y.marks = 89;
    Y.grade = 'A';
    printf("%s\n",Y.A);
    printf("%d\n",Y.age);
    printf("%f\n",Y.marks);
    printf("%c\n",Y.grade);
    return 0;
}
