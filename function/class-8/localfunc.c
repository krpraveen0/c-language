#include<stdio.h>
void localVar();
//global variable
int b = 20;
void main(){
    //local variable to main function
    int a;
    a = 15;
    printf("%d global variable \n",b);
    printf("local to main %d \n",a);
    localVar();
    
}
void localVar(){
        //local variable of localVar function
        int a = 10;
        printf("local to localVar %d \n",a);
        printf("global variable %d",b);

    }