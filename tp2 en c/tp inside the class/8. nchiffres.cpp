#include <stdio.h>

int main(){
	int n, m = 0;
	int nchiffre = 0, somme = 0;
	
	printf("Saisir un entier: ");
	scanf("%d",n);
	
	for(int i = n; i%10 != 0; i/10){
		nchiffre = nchiffre +1;
		somme = m + somme;
	}
	printf("Le nombre de chiffres est: %d\n", nchiffre);
	printf("Leur somme est: %d ", somme);
}
