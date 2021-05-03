//write a program to read input from the user till he/she doesn't enter's character 'a'.
#include<stdio.h>
void main(){
    //declare a string
    char stu_name[100];
    printf(" Enter the name of the student:");
    //read the name of the student form the user with the given restriction/validation
    scanf("%[^a]",stu_name);
    //display the output (names)
    printf(" The entered name is : %s",stu_name);

}
