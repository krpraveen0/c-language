//Calculate array average:
//write a program to find the average age of students of a class chosen for a junior quiz competition.
#include<stdio.h>
#include<conio.h>

/* Function declaration */
float avg_age(int x[], int n);

/* defining main function */
int main(void){
    int i , a[50],n;
    float average;
    printf("Enter how many students? \n");
    scanf("%d",&n);
    printf("Enter the age of students: \n");
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    average = avg_age(a,n);
    printf("The average age of students = %f \n",average);
    return 0;

}

/*Function to find average of array elements(average of stundets array */

float avg_age(int x[],int n){
    int i;
    float sum = 0, avg;
    for(i = 0;i<n;i++){
        sum = sum + x[i];
    }
    avg = sum /n;
    return avg;
}