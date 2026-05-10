#include <stdio.h>
#include<stdlib.h>

int main(void)
{
   int a =10,b=20;
   int *ptr1 = &a;
   int *ptr2 = &b;
   *ptr1=88;
   *ptr2=a;
   printf("a = %d\n",a);//88
   printf("b = %d",b);//88

   
  






    return 0;
}