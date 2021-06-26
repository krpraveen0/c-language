//change vlues of an array:
//write a program to double tha values of an array
#include<stdio.h>

/* function decalaration */
void multipl2(int[], int);

/* definition of main function: */
void main(){
    int a[50], n,i;
    printf("Enter a value: \n");
    scanf("%d",&n);
    printf("Enter array element \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n Array elements before changing \n");
    for(i=0;i<n;i++){
        printf("%5d",a[i]);
    }
    multipl2(a,n);
    printf("\n Array elements after changing");
    for(i=0;i<n;i++){
        printf("%5d",a[i]);
    }
}

/* function to double the values of array */
void multipl2(int x[],int n){
    int i;
    for(i=0;i<n;i++){
        x[i] = x[i]*2;
    }
}
