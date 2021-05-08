#include<stdio.h>
void main(){
    char name[50];
    printf("Enter your name: ");
    gets(name);
    //reversing the name
    strrev(name);
    //displaying the reversed name 
    printf("the reversed string is : %s",name);
}