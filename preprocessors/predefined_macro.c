#include<stdio.h>
int main(){
    //Default/predefined  macro 
    printf("Line macro gives the line number: %d \n", __LINE__);
    printf("DATE macro gives the current date: %s \n", __DATE__);
    printf("Time macro gives the current time: %s \n", __TIME__);
    printf("File macro gives the source file name: %s \n", __FILE__);
    return 0;
}