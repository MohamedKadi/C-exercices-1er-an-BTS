#include <stdio.h>

int main(){
	int g, tg = 0, cg = 0;
	
	printf("enter your grades if you wanna end it type -1: ");
	scanf("%d", &g);
	
	while (g != -1){
		tg = tg + g;
		cg++;
		printf("enter your grades if you wanna end it type -1: ");
		scanf("%d", &g);
	}
	int xresult= tg/cg;
	printf("your results est: %d", xresult);
}
