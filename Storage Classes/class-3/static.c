#include<stdio.h>
void increment();
void main(){
    increment();
    increment();
    increment();
}
void increment(){
    static int i;
    // int i ;
    i = i+1;
    printf("%d\n",i);

}