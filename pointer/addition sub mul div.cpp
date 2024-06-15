#include<stdio.h>

float addition(float *a,float *b){
	return (*a)+(*b);
}

float sub(float *a,float *b){
	return (*a)-(*b);
}

float mul(float *a,float *b){
	return (*a)*(*b);
}

float div(float *a,float *b){
	return (*a)/(*b);
}
int main(){
	float a;
	float b;
	printf("donner a: ");
	scanf("%f",&a);
	printf("donner b: ");
	scanf("%f",&b);
	
	float *p1;
	float *p2;
	
	p1=&a;
	p2=&b;
	
	printf("somme : %.2f\n",addition(p1,p2));
	printf("sub : %.2f\n",sub(p1,p2));
	printf("mul : %.2f\n",mul(p1,p2));
	printf("div : %.2f\n",div(p1,p2));
	
}
