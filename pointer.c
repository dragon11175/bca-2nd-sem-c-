#include<stdio.h>

void swap(int* a,int* b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=34,b=45;
    printf("befor use swap function:");

    printf("\nvalue of a:%d",a);
    printf("\nvalue of b:%d",b);


    swap(&a,&b);

    printf("\nafter use swap function:");

    printf("\nvalue of a:%d",a);
    printf("\nvalue of b:%d",b);




    return 0;
}