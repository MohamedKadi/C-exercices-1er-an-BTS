#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct {
	char nom[100];
	char tel[11];
}Personne;

typedef struct Maillon{
	Personne P;
	struct Maillon *suivant;
}Maillon;

Maillon *tete=NULL;

Personne Saisir_Personne(){
	Personne Personnex;
	printf("entrer le nom: ");
	scanf("%s",(Personnex.nom));
	printf("entrer le numero de telephone: ");
	scanf("%s",(Personnex.tel));
	
	return Personnex;
}

void Affiche_Personne(Personne P){
	printf("%s%20s\n",P.nom,P.tel);
}

Maillon *Recherche_Personne(Maillon *tete,char nomp[100]){	
	if(tete == NULL){
		printf("la liste est vide");
	}else{
		int n;
		Maillon *temp=tete;
		while(temp!=NULL){
			n=strcmp(temp->P.nom,nomp);
			if(n == 0){
				return temp;
			}
			temp=temp->suivant;
		}
	}
	return NULL;
}

Maillon *Modifie_Personne(Maillon *tete, char nomp[100], char nvtel[11]){
	if(tete == NULL){
		printf("la liste est vide");
	}else{
		int n;
		Maillon *temp=tete;
		while(temp != NULL){
			if(strcmp(temp->P.nom, nomp) == 0){
                strcpy(temp->P.tel, nvtel);
            }
			temp=temp->suivant;
		}
	}
	return tete;
}

Maillon *Ajouter_Personne(Maillon *tete, Personne P){
	Maillon *p=(Maillon *) malloc(sizeof(Maillon));
	p->P=P;
	p->suivant=NULL;
	
	if(tete == NULL){
		tete=p;
	}else{
		Maillon *temp=tete;
		Maillon *temp2=NULL;
		
		
		if(Recherche_Personne(tete,P.nom)!=NULL){
			strcpy(Recherche_Personne(tete,P.nom)->P.tel, P.tel);
			return tete;
		}else{
			int found =0;
			temp=tete;
			while(temp != NULL){
				found = 0;
				if(temp->P.nom[0]>p->P.nom[0]){
					temp2=temp;
					temp=temp->suivant;
					found =1;
				}
				if(found == 1){
					temp2->suivant=p;
					p->suivant=temp;
					return tete;
				}
				temp=temp->suivant;
				
			}
			temp=p;
		}
	}
}

void Affiche_Liste(Maillon *tete){
	if(tete==NULL){
		printf("la list est vide");
	}else{
		Maillon *temp=tete;
		while(temp!=NULL){
			Affiche_Personne(temp->P);
			temp=temp->suivant;
		}
	}
}

void Supprimer_Liste(Maillon *tete){
	Maillon *temp;
    while (tete != NULL) {
        temp = tete;
        tete = tete->suivant;
        free(temp);
    }
}



int main(){
	Maillon *p=Ajouter_Personne(tete, Saisir_Personne());
	p=Ajouter_Personne(tete, Saisir_Personne());
	p=Ajouter_Personne(tete, Saisir_Personne());
	p=Ajouter_Personne(tete, Saisir_Personne());
	Affiche_Liste(tete);
	printf("\n");
	Supprimer_Liste(tete);
	Affiche_Liste(tete);
	
    return 0;
	
}
