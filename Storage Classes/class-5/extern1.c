#include<stdio.h>
//link program extern2.c"
#include "extern2.c"
//external global var decalration
int i;
void show(void);

int main(){
    show();
    printf("\n Value of I in extern1.c = %d \n",i);
    return 0;
}