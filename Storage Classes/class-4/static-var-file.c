//static variable having file scope
#include<stdio.h>
//declaring function.
void fun(void);
//static variable with file scope
static int x = 1;

int main(){
    int i ;
    for(i = 1;i<=3;i++){
        x++;
    }
    printf("Value of x in main is : %d \n",x );
    fun();
    printf("Value of x in main is: %d \n",x);
    return 0 ;
}

//function definition
void fun(void){
    x++;
    printf("Value of x in fun function is: %d \n",x);
    return;
}