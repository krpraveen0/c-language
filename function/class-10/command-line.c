//demonstration of the use of command line
#include<stdio.h>
int main(int argc, char *argv[]){
    //local varialble
    int i ;
    printf("The number of arguments: %d\n",argc);
    printf("The name of the program is: %s\n",argv[0]);
    for(i=1;i<argc;i++){
        printf("User value no. %d : %s \n",i, argv[i]);
    }
    return 0;
}