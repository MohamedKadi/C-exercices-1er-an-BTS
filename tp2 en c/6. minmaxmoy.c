#include <stdio.h>

int main() {
	int N, n = 0, i;
	float S = 0;
	float min = 10000;
	float max = -10000;
	
	printf("Saisir un entier: ");
	scanf("%d",&N);
	printf("Veuillez saisir 8 entiers : ");
	
	for(i = 1; i <= N; i++){	
		scanf("%d", &n);
		if( n >= max ){
			max = n;
		} if ( n <= min){
			min = n;
		}
		S = S + n;
	}
	
	printf("Min: %.2f Max: %.2f Somme: %.2f Moyenne: %.2f" ,min , max, S, S/N);
	
	return 0;
}
