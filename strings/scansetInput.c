//reading string using scanset conversion code([...])
#include<stdio.h>
void main(){
    char str[50];
    printf("Enter a string in lower case: \n");
    // using scanset conversion in scanf()
    scanf("%[a-z]",str);
    //printing the output
    printf(" the string was : %s \n", str);
    
}