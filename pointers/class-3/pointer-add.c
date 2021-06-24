//program to demonstrate that the value of a pointer is the same as the address to which the pointer points
#include<stdio.h>
void main(){
    int i = 5;
    int *ptr = &i;
    printf("the address of i is : %u\n",&i);
    printf("The address stored in pointer variable is: %u\n",ptr);
    //using indirection operator(*) with pointer variable for accessing a variable indirectly 
    printf("The value at address of i is : %d",*ptr);
}

//write a program to reverse three digit number given by the user?