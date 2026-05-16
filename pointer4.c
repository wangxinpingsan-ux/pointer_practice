#include <stdio.h>
#include<stdlib.h>

int main(void)
{
int x = 5;
int y = 10;

int *ptr = &x;    
int *pptr = &ptr; 

*pptr = &y;     

printf("x = %d\n", x);
printf("y = %d\n", y);
printf("*ptr = %d\n", *ptr);

  






    return 0;
}