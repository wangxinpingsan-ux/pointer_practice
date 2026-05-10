#include <stdio.h>

int main(void)
{

    int a = 5;
    int *aptr = &a;
    printf(" a %d\n", a);//5
    printf(" *aptr %d\n",*aptr );//5
    printf(" aptr %p\n", aptr);//address


    *aptr=100;//把地址的人改成100
    printf(" a %d\n", a);//100
    printf("*aptr  %d\n",*aptr );//100
    printf("aptr  %p\n", aptr);//same address




    return 0;
}