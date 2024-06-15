#include <stdio.h>

int main(){
	float p,r,t;
	float l;
	
	printf("entrer les valeurs de p et r et t: ");
	scanf("%f %f %f",&p ,&r ,&t);
	
	l = (p*r*t)/100;
	printf("le resultas final est %.2f", l);
	
	
	return 0;
}
