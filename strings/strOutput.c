#include<stdio.h>
int main(){
    char s[] = "lingaraju";
    //clrscr() is used to clear the screen after execution of the program 
    printf("%s\n", s);
    printf("%20s\n",s);
    printf("%.4s\n",s);
    printf("%-20s\n",s);
    printf("%-20.4s\n",s);
    printf("%20.4s\n",s);
    return 0;
}