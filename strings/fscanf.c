#include<stdio.h>
void main(){
    char s[] = "We are here to learn C programming language.";
    fputs(s,stdout);
    //where  stdout is the place where we want to show/write the output 
    fputs("\n",stdout);
}