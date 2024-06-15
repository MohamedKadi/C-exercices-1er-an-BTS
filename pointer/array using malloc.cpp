#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p;
	p = (int *) malloc(6*sizeof(int));
	
	for(int i=0;i < 6;i++){
		printf("enter a number: ");
		scanf("%d",&*(p+i));
	}
	for(int i=0;i < 6;i++){
		printf("%d",*(p+i));
	}
	
	
	return 0;
}
