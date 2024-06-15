#include <stdio.h>   
#include <stdlib.h> 
 
int main(void) 
{
    int *p;
    p=(int *) malloc(1*sizeof(int));
    printf("donner *p: ");
    scanf("%d",p);
    
    printf("*p=%d\n",*p);
    
    *p=10;
    
    printf("*p=%d",*p);
}
