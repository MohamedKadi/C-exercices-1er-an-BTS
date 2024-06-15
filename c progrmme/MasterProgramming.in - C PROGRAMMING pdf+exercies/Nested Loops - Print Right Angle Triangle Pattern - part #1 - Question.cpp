#include <stdio.h>

int main(){
	int x, i,y;
	
	printf("enter a number: ");
	scanf("%d", &x); //2
	
	for(i=1 ; i <= x; i++){ 
		for(y=1; y <= i; y++){
			printf("%d",y);
		}
		printf("\n");
	}
}
