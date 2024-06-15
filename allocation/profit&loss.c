#include<stdio.h>
#include<stdlib.h>

int main(){
	float *pr = malloc(sizeof(float));
	float *pv = malloc(sizeof(float));
	float *p  = malloc(sizeof(float));
	
	printf("donner un prix de revient: ");
	scanf("%f",&(*pr));
	printf("donner un prix de vente: ");
	scanf("%f",&(*pv));
	
	(*p) = *pv - *pr;
	if(*pv > *pr){
		printf("profit: %f",(*p));
	}else{
		printf("loss: %f",(*p));
	}
	
	free(pr);
	free(pv);
	free(p);
	
}
