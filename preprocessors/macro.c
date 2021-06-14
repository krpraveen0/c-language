#include<stdio.h>
//macro constant
#define G 10;
//macro like function
#define perimeter(l,b) (2)*(l+b)
//nested macros
#define bigger(x,y) ((x)>(y) ? (x) : (y))
void main(){
    float pmt;
    int gravity = G;
    pmt = perimeter(2,4);
    printf("The perimeter is : %f \n",pmt);

    printf("The value of gravitational force is %d \n",gravity);
    printf("This is bigger %d \n",bigger(2,4));
}