#include<stdio.h>
void main(){
    //register class specifier.
    register int i ;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
    }
}