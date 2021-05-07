#include<stdio.h>
void main(){
    char str1[50];
    char str2[50];

    // str1 = "lingaraju";
    // str2 = "malleshwaram";
    printf("Enter the first string \n");
    gets(str1);
    printf("Enter the second string \n");
    gets(str2);

    //comparing two strings str1 and str2
    str1>str2;


    //we cannot assign one string to another string ie ( we cannot do str1 = str2).
   // str1 = str2;// error: assignment to expression with array type
    printf("str1 has been assigned to str2");
}