#include <stdio.h>

int main(){
	int n;
	
	printf("Saisir un entier: ");
	scanf("%d",n);
	
	for(int i = n; i>=1; i--){
		for(int j = i; j <= ; j++){
			printf(" ");
		}
		for(int z = 1;z<= n; z++){
			printf("*");
		}
		printf("\n");
	}
	
}
