//demonstration of gets()
#include<stdio.h>
void main(){
    //declaring a string 
    char name[100];
    printf("Enter the string:");
    //gets function for reading the input from the user
    gets(name);
    //for reading of string we should always prefer gets() as it is a function of standard library of c language.
    //displaying the user entered name
    printf("The entered name was: %s",name );
    
}