// a program in which a pointer would point an integer variable, whichever will be larger between 
// two variables through a function which returns the address of the larger variable.
#include<stdio.h>
int* maximum(int* x, int* y);

void main(){
    int a,b, *p;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    p = maximum(&a,&b);
    printf("Maximum number is: %d\n",*p);
}

//function
int* maximum(int* x,int* y){
    if(*x > *y){
        return x;
    }
    else if(*x < *y){
        return y;
    }
    else{
        printf("Both are equal");
    }
}