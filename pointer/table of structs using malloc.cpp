#include<stdio.h>
#include<stdlib.h>
typedef struct {
	float a;
	float b;
	
}complexe;

int main(){
	complexe *a;
	a = (complexe *) malloc(3*sizeof(float));
	
	for(int i=0;i<3;i++){
		printf("enter les nums de p[%d]: ",i);
		scanf("%f%f",&(*(a+i)).a,&(a+i)->b);
	}
	
	for(int i=0;i<3;i++){
		printf("p[%d]: a=%.2f et b=%.2f\n",i,(*(a+i)).a,(*(a+i)).b);
	}
	return 0;
}




















