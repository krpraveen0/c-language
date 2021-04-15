//reading string using scanf() with %s specifier.
#include<stdio.h>
void main(){
    char name[20];
    printf("Enter the string:");
    scanf("%s",name);
    printf("The string is : %s",name);
}