//login system 
#include<stdio.h>
#include<string.h>
void main(){
    char name[30];
    char password[20];
    char temp [20];
    char pwd[20];
    int passFlag, nFlag;

    // signup process
    //setting the user name
    printf("Enter the username: ");
    gets(name);
    //setting the password
    printf("Enter the password: ");
    gets(password);

    printf("Login system \n");

    //logging in 
    printf("Enter the username: ");
    gets(temp);
    //strcmp() return non-zero integer if the passed argument strings are not equal else it returns 0 .
    nFlag = strcmp(name,temp);
    if(nFlag == 0){
        printf("Enter the password: ");
        gets(pwd);
        passFlag = strcmp(pwd,password);
        if(passFlag == 0){
            printf("Welcome to my website. Stay tunned and start learning C language...");
        }
        else{
            printf("Wrong passwrod!!! , Please enter the correct Password");
        }
    }
    else{
        printf("Wrong username, Please enter the correct username.");
    }
    
}