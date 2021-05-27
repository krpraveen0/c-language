//write a function to perform addition and substraction
//header file
#include<stdio.h>
//function declaration
int add(int x, int y);
int sub(int x, int y);
void main(){
    int num1,num2;
    num1 = 20;
    num2=30;
    add(num1,num2);
    sub(num1,num2)

}
//defining add function
int add(int x, int y){
    return x+y;
}

//defining the sub function
int sub(int x, int y){
    //return y - x;
    if(x > y){
        return x-y;
    }else{
        return y-x;
    }
}

