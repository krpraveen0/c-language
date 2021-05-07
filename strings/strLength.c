//finding the length of given string 
#include<stdio.h>
#include<string.h>
void main(){
    char str[50];
    char copyStr[60];
    char numStr[60];
    int length;
    printf("Enter a string: ");
    gets(str);
    //calculating the length of string 
    length = strlen(str);
    strcpy(copyStr,str);
    strncpy(numStr,str,2);
    numStr[2] = '\0';
    printf("The lenght of the str string is : %d\n",length);
    printf("The copied string is %s\n",copyStr);
    printf("The copied string to 2nd char is : %s",numStr);
}