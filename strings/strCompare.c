#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    char str2[100];
    int flag;
    printf("Enter the first  string:");
    gets(str);
    printf("Enter the second the string : ");
    gets(str2);
    //comparing two strings (str and str1);
    flag = strcmp(str,str2);//if it returns 0 then str and str2 are equal
    printf("flag : %d \n",flag);
    if(flag == 0){
        printf("str and str2 are equals");
    }else{
        printf("str and str2 are not equal.");
    }

}