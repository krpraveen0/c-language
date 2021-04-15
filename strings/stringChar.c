#include<stdio.h>
void main(){
    char str[10];
    printf("Enter the string:");
    //below line contains count (10) with %c which tells that string contains only 10 characters
    scanf("%10c",str);
    //As the %c conversion doesn't generates (\0) null char automatically we will have to put this explicitly to 
    // end out string .
    str[9] = '\0';
    printf("String entered by the user is : %s ",str);

}