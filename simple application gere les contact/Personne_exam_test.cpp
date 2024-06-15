#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char nom[100];
	char tel[11];
}Personne;

typedef struct Maillon{
	Personne p;
	struct Maillon *suivant;
}Maillon;

Personne Saisir_Personne(){
	Personne p1;
	
	printf("enter le nom: ");
	scanf("%s",&(p1.nom));
	printf("enter tel: ");
	scanf("%s",&(p1.tel));
	
	return p1;
}

void Affiche_Personne(Personne P){
	printf("%-80s%s",P.nom,P.tel);
}

Maillon *Recherche_Personne(Maillon *tete,char nomp[100]){
	
}

int main(){
	Personne p1;
	p1=Saisir_Personne();
	Affiche_Personne(p1);
}
