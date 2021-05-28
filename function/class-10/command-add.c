//addition using command line arguments
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int a,b,sum;
    if(argc != 3){
        printf("Invalid number of arguments \n");
        exit(0);
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    sum = a + b;
    printf("Addition is: %d \n",sum);
    return 0;
}