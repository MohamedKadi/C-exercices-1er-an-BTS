#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n = (int *) malloc(sizeof(int));
	printf("enter size: ");
	scanf("%d",&(*n));
	int *tab = (int *) malloc((*n)*sizeof(int));
	printf("enter the table: ");
	for(int i=0; i < (*n);i++){
		scanf("%d",&*(tab+i));
	}
	int *min = (int *) malloc(sizeof(int));
	*min = (*tab+0);
	for(int i=0; i < (*n);i++){
	    if((*min)>*(tab+i)){
	        (*min)= *(tab+i);
	    }
		printf("%d |",*(tab+i));
	}
	printf("min: %d",*min);
	
	free(tab);
	free(n);
	free(min);
	
	
}
