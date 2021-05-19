//example of user defined function
#include<stdio.h>
/*Function declaration*/
int add(int x, int y);
/* main function */
void main(){
    int num1, num2, sum;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    //scanf("%d %d",&num1, &num2);
    scanf("%d",&num2);
    //calling the add() function and storing the output in sum variable
    sum = add(num1,num2);
    //displaying the output
    printf("Addition of two numbers is %d",sum);
}

/* user defined Function - add() to find addition of two numbers*/
int add(int x, int y){
    // return x + y;
    int z ;
    z = x+y;
    return z;
}
//write a program to subtract, multiply, divide two numbers using functions