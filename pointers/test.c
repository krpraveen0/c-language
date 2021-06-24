//write a program to swap two numbers
#include<stdio.h>
void main(){
    int num1,num2,temp;
    // num1 = 10;
    // num2 = 20;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    printf("Before swapping:\n");
    printf("The value of num1: %d\n",num1);
    printf("the value of num2 : %d\n",num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swaping:\n");
    printf("The value of num1: %d\n",num1);
    printf("the value of num2 : %d\n",num2);
}