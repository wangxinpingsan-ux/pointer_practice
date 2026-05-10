#include <stdio.h>


void swap(int *x, int *y) {//a b value
    int temp =*x;
    *x=*y;
    *y =temp;
    

    
}

int main(void) {
    int a = 10, b = 20;

    printf("before: a = %d, b = %d\n", a, b);//a=10 b=20

    
    swap(&a, &b);//put address

    printf("after: a = %d, b = %d\n", a, b);//a=20 b=10

    return 0;
}


