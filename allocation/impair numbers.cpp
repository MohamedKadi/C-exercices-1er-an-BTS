#include<stdio.h>
#include<stdlib.h>

int main(){
	int *count = malloc(sizeof(int));
	printf("enter a number: ");
	scanf("%d",&(*count));
	int *i = malloc(sizeof(int));
	*i = 1;
	while(i<=(*count)){
		printf("%d |",*i);
		*i = *i + 2;
	}
	
	
}
