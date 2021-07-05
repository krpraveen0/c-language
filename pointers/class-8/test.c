//write a program to store address of a variable and change its value by using the concept of pointer.
#include<stdio.h>
void main(){
    int num = 10;
    int* numpointer = &num;
    printf("The value of num is : %d \n",num);
    printf("the address of num is :%ld \n",numpointer);
    printf("Changing the value of num: \n");
    *numpointer = 15;
    printf("The value of num is :",num);
}