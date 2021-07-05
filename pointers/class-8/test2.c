//write a program which stores address of two variables and store those variables and perform addtion 
//if first number is greater than the second number otherwise perform substraction.
#include<stdio.h>
void main(){
    int num1 = 10 ;
    int num2 = 20 ;
    int* num1Pointer = &num1;
    int* num2Pointer = &num2;
    if(num1>num2){
        //addition
        printf("THe sum is : %d \n",(*num1Pointer + *num2Pointer));

    }else{
        //subtration
        printf("The difference is : %d",(*num2Pointer - *num1Pointer));
    }
}