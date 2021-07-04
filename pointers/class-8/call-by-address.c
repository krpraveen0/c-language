#include<stdio.h>
void sum(int* a, int* b);

void main(){
    int x,y;
    x= 10;
    y = 20;
    //calling a function
    sum(&x,&y);//called function
    printf("the value of  x is : %d and y is: %d",x,y);
}

//sum function
void sum(int* a, int* b){
    *a = 15 ;
    *b =  24;
    int sum;
    sum = *a + *b;
    
    printf("The sum of a and b is %d: \n",sum);
}

