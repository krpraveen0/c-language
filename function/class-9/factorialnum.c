//Program to find factorial of a given number using recursive function.

#include<stdio.h>
//declare function
int factorial(int num);

void main(){
    int n, f;
    printf("Enter a number:");
    scanf("%d",&n);
    f = factorial(n);
    printf("The factorial of a given number is %d \n",f);

}

//defining the factorial function using recursion
int factorial(int num){
    //base case , 
  if(num == 0){
      return 1;
  }else{
      return(num * factorial(num - 1));
  }
}