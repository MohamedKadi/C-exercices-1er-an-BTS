#include <stdio.h>

int main(){
	int SF, CA, SM;
	
	printf("Donner le salaire fixe: ");
	scanf("%d", &SF);
	
	printf("Donner le chiffre d’affaire: ");
	scanf("%d", &CA);
	
	if ( CA > 100000){
		SM = SF+(2/100)*CA;
		printf("le salaire fixe:		%d\n",SF);
		printf("le chiffre d’affaire:		%d\n",CA);
		printf("Le salaire mensuel est:		%d\n",SM);
	} else if (CA > 30000 && CA <= 100000){
		SM = SF+(1.5/100)*CA;
		printf("le salaire fixe:		%d\n",SF);
		printf("le chiffre d’affaire:		%d\n",CA);
		printf("Le salaire mensuel est:		%d\n",SM);
	} else {
		SM = SF+CA;
		printf("le salaire fixe:		%d\n",SF);
		printf("le chiffre d’affaire:		%d\n",CA);
		printf("Le salaire mensuel est:		%d\n",SM);
	}
}
