#include <stdio.h>

int main (){
	int n;
	
	printf("Saisir un entier: ");
	scanf("%d",&n);
	
	
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= i; j++){
			if(i % j == 0){
				break;
			}
			if (j > i/2){
				printf("%d	",i);
			}
		}
	}
}
