#include <stdio.h>

int main(){
	int n;
	int lasomme;
	int sumgeneral = 1;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	if (n >= 2){
		for(int j = 1; j <=n; j++){
			lasomme = 0;
			for(int i = 1; i <= j; i++){
				lasomme = lasomme + i;
			}
		sumgeneral = sumgeneral*lasomme;
		}
	}
	printf("la somme est: %d",sumgeneral);
	return 0;
}
