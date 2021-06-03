extern int i = 2;//refering var i in extern1.c
void show(){
    int j;
    j = i * 2;
    printf("\n value of j in extern2.c = %d", j);
}
