#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void){

int size =0;
printf("how many number");
scanf("%d",&size);

int *ptr = malloc(size*sizeof(int));

if (*ptr==0)
{
    printf("error");
    return 1;
}
for(int i =0;i<size;i++){
    
printf("enter number");
scanf(" %d",&ptr[i]);//&ptr[i]=&(*ptr+i)

}

for(int i =0;i<size;i++){
    
printf(" %d\n",ptr[i]);//ptr[i]=*(ptr+i)


}
free(ptr);
ptr = NULL; 


    return 0;
}