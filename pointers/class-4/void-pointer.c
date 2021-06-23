//void pointer demonstration
#include<stdio.h>
void main(){
    int a = 5;
    double b = 3.14;
    void *vp;
    vp = &a;
    printf("a= %d \n", *(int*)vp);
    vp  = &b;
    printf("b=%lf\n",*((double*)vp));
}