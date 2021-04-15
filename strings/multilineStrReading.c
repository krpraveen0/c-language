#include<stdio.h>
void main(){
    //creating a string 
    char str[80];
    //asking the user to input
    printf("Enter a string , terminated with (~) \n");
    //taking input or reading multiline input using scanset with caret(^) and terminating symbol(~)
    scanf("%[^~]",str);
    //printing the output
    printf("The string was: %s \n",str);
}