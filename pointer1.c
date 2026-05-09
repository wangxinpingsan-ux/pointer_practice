#include <stdio.h>

int main (void){


  int a = 5;
  int *aptr = & a;


  printf("a value = %d\n *aptr value = %d\n",a ,*aptr);//5
  printf("a address = %p\n aptr address = %p\n",&a ,aptr);//address
  printf("*&aptr = %p\n &*aptr = %p\n",*&aptr ,&*aptr);//address









    return 0 ;
}