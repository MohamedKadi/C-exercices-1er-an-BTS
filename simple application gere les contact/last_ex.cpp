#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nom[100];
	char tel[11];
	
}Personne;

typedef struct Maillon{
	Personne P;
	Maillon *suivant;
}Maillon;

Personne Saisir_Personne(){
	Personne p1;
	printf("enter a nom: \n");
	scanf("%s",&p1.nom);
	printf("enter a tel: \n");
	scanf("%s",&p1.tel);
	return p1;
}

void  Affiche_Personne(Personne P){
	printf("%-80s%s\n",&(P.nom),&(P.tel));
}

Maillon *Recherche_Personne(Maillon *tete,char nomp[100]){
	Maillon *temp=tete;
	while(temp != NULL){
		if(strcmp(temp->P.nom,nomp)==0){
			return temp;
		}
		temp=temp->suivant;
	}
	return NULL;
}

Maillon *Modifie_Personne(Maillon *tete, char nomp[100], char nvtel[11]){
	Maillon *temp=Recherche_Personne(tete,nomp);
	if(temp!=NULL){
		strcpy(temp->P.tel,nvtel);
		return tete;
	}
	return NULL;
}

Maillon *Ajouter_Personne(Maillon *tete, Personne P){
	Maillon *p1=(Maillon *) malloc(sizeof(Maillon));
	p1->P=P;
	p1->suivant=NULL;
	Maillon *temp=Recherche_Personne(tete,P.nom);
	
	if(temp!=NULL){
		Modifie_Personne(temp, P.nom, P.tel);
	}else{
		temp=tete;
		Maillon *temp2=NULL;
		while(temp!=NULL){
			if(strcmp(temp->P.nom,P.nom)==1){
				temp2=temp;
				temp=temp->suivant;
			}else{
				if(temp2==NULL){
					p1->suivant=tete;
					tete=p1;
					
				}else{
					p1->suivant=temp;
					temp2->suivant=p1;
					
				}
				return tete;
			}
		}
		tete=p1;
		
	}
	return tete;
	
}


void Affiche_Liste(Maillon *tete){
	Maillon *temp=tete;
	if(temp==NULL){
		printf("NULL");
	}else{
		while(temp!=NULL){
			Affiche_Personne(temp->P);
			temp=temp->suivant;
		}
	}	
}

void Supprimer_Liste(Maillon *tete){
	Maillon *temp=tete;
	Maillon *temp2=tete;
	while(temp!=NULL){
		temp2=temp;
		temp=temp->suivant;
		free(temp2);
	}
}
int main() {
    // Your main function code here
    return 0;
}

































