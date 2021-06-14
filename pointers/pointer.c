#include<stdio.h>
void main(){
    int num = 5;
    //address of operator
    printf("The address of num is : %u \n",&num);
    //value at address operator.
    printf("The value at address of num is: %d",*(&num));
}