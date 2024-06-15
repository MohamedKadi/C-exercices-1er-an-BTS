#include <stdio.h>

int main() {
	int n=11001001;
	int produit = 1;
	int somme = 0;
	int s = 0;
	
	for(int i = n; i > 0; i=i/10){
		somme = somme;
		if( i%10 == 1 ){
				produit = 1;
				for(int z = 1; z <= somme; z++){
					produit = produit * 2;
				}
				s = s + produit;
		}
	}
	printf("%d", s);
}
