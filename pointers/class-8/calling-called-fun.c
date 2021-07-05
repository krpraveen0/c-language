//Example of call by value
#include<stdio.h>
void sum(int a, int b);

void main(){
    int x,y;
    x= 10;
    y = 20;
    //calling a function
    sum(x,y);//called function
    printf("the value of  x is : %d and y is: %d",x,y);
}

//sum function
void sum(int a, int b){
    a = 15;
    b = 10;
    printf("The sum of a and b is %d: \n",(a+b));
}

//IN above program main()  is the calling function which calls sum function.
//sum(4,5) is called function which being called by main()(calling) function to perform some operation(addition.).
//Here in call by value technique of parameter passing we pass value of the variables.