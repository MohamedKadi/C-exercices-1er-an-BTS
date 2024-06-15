#include <stdio.h>

int main(){
	int g, tg = 0, cg = 0;
	
	printf("enter your grades if you wanna end it type -1: ");
	scanf("%d", &g);
	
	while (g != 0){
		tg = tg * g;
		cg++;
	}
	printf("your results est: %d", tg/cg);
}
