#include <stdio.h>

int main(){
	// declaration des variables
	int x1, y1, x2, y2, a, c;
	// demander utilisateur pour enter les valeur
	printf("donner x1 et y2: ");
	scanf("%d%d", &x1,&y1);
	
	printf("donner x2 et y2: ");
	scanf("%d%d", &x2, &y2);
	// calcul
	a = (x1+x2)/2;
	c = (y1+y2)/2;
	//resultat
	printf("Le point milieu de (%d,%d) et (%d,%d) est (%d,%d)", x1, y1, x2, y2, a, c);
	
	
	return 0;
}
