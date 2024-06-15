#include <stdio.h>

int main(){
	int n=256728;
	
	int s = 0;
	int somme = 0;
	int k = n/10;
	
	for(int i = n ; i%10 !=0; i=i/10 ){
		s = s + 1;
		somme = somme + i%10;
		
	}
	printf("Le nombre de chiffres est : %d\n", s);
	printf("Leur somme est : %d", somme);

}
