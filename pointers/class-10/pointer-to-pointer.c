//pointer to pointer example
#include<stdio.h>
void main(){
    //local decalaration
    int** num1;
    int* num2;
    int num3;

    //statement
    num3 = 10;
    num1 = &num2;
    num2 = &num3;

    printf("The value of num1: %3d \n",num1);
    printf("the value of num2: %3d \n",num2);
    printf("The value of num3: %3d",num3);
    
}