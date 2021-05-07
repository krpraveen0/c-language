#include<stdio.h>
void main(){
    char str[80];
    gets(str);
    for(int i = 0;i<80;i++){
        puts(str);
    }
}