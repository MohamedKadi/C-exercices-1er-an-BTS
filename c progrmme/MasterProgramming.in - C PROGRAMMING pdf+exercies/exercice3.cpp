#include <stdio.h>

int main(){
	int a,b,c;
	float average;
	
	printf("entrer les valeurs de a et b et c: ");
	scanf("%d %d %d",&a ,&b ,&c);
	
	average = (a+b+c)/3;
	printf("le resultas final est %f", average);
	
	
	return 0;
}
