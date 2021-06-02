#include<stdio.h>
void increment();
void main(){
    increment();
    increment();
    increment();
}
void increment(){
    auto int i = 10;
    i = i+1;
    printf("%d\n",i);
}