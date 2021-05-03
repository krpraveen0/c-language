#include<stdio.h>
void main(){
    //input = raja
    //output = ajar

    //declaring a string 
    char inputStr[50];
    //declaring a temporary string
    char temp;
    //declararing variables and initializing it with 0
    int i,j,l = 0;
    
    printf("Enter a string");
    //reading the user entered string 
    gets(inputStr);

    //business logic
    //step-1 finding lenght of a string 
    //As we know every string ends with a null character '\0' so we need to count number of character in a 
    //string till we don't get null, in this way we will get length of that string .
    for(i=0;inputStr[i] != '\0';i++){
        l = l+1;
    }
    //in above code l has the length of the string entered by the user

    //reversing  the entered string 
    for(i=0,j=l-1; i<l/2 ;i++,j--){
        temp = inputStr[i];
        inputStr[i] = inputStr[j];
        inputStr[j] = temp;

    }

    //displaying the output
    printf(" REverse of the input string is %s ",inputStr );

}