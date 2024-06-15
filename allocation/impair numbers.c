#include<stdio.h>
#include<stdlib.h>

int main(){
	int *count = malloc(sizeof(int));
	int *i = malloc(sizeof(int));
	int *somme = malloc(sizeof(int));
	printf("enter a number: ");
	scanf("%d",&(*count));
	
	*somme = 0;
	(*i) = 1;
	while(*i<=(*count)){
		printf("%d |",*i);
		(*somme) = (*somme)+(*i);
		*i = *i + 2;
		
	}
	printf("\nsomme: %d",(*somme));
	printf("\npair\n");
	(*i) = 1;
	while(*i<=(*count)){
		if((*i)%2==0){
			printf("%d |",*i);
		}
		*i = *i + 1;
	}	
}
