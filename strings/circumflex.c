//reading single line input using scanset with ^(circumflex)
#include<stdio.h>
void main(){
    // creating a string 
    char str[50];
    printf(" enter a string in lower case: \n");
    //i have used circumflex(^) to read only one line
    scanf("%[^\n]",str);
    printf(" The string was: %s \n",str);

}