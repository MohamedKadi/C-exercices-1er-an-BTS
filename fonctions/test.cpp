#include<stdio.h>
/*
	Une procédure nommée ligneEtoiles(n) qui affiche une ligne de n étoiles
	horizontales et revient à la ligne suivante (Ecrire("\n") )
*/
int lignetoiles(int x){
	for(int i = 0; i < x; i++){
		printf("* ");
	}
}
/*
	Une procédure nommée ligneEtoilesCreuse(n) qui affiche une ligne contenant
une étoile au début et à la fin et n-2 espaces au milieu puis retourne à la ligne.
*/

int lignetoilesco(int x){
	printf("* ");
	for(int i = 1; i < x-1; i++){
		printf("  ");
	}
	printf("*\n");
}




int main(){
	int n,m;
	

	printf("enter la taille n = ");
	scanf("%d",&n);
	

	lignetoiles(n);
	
	printf("\n======================================\n");
	
	lignetoilesco(n);
	
	printf("======================================\n");
	
	printf("enter le n les lignes: ");
	scanf("%d",&m);
	
	//rectangleCreux(n,m)
	lignetoiles(n);
	printf("\n");
	for(int i = 0; i < m-2; i++){
		lignetoilesco(n);
	}
	lignetoiles(n);
	
	printf("\n======================================\n");
	
	//rectanglePlein(n,m)
	printf("\n");
	for(int i = 0; i < m; i++){
		lignetoiles(n);
		printf("\n");
	}
	
	printf("\n======================================\n");
	
	//carreePlein(n)
	for(int i = 0; i < n; i++){
		lignetoiles(n);
		printf("\n");
	}
	
	printf("======================================\n");
	
	//carreeCreux(n)
	lignetoiles(n);
	printf("\n");
	for(int i = 0; i < n-2; i++){
		lignetoilesco(n);
	}
	lignetoiles(n);
	
	
}
