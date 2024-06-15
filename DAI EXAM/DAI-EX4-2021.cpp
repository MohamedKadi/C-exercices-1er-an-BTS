#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct date{
	int jour;
	int mois;
	int annee;
}date;

typedef struct Personne{
	char nom[30];
	char telephone[10];
	date DATE;
	struct Personne *suivant;
}Personne;


Personne* AllouePersonne() {
	Personne *P=(Personne *) malloc(sizeof(Personne));
	return P;
}

Personne *SaisiePersonne(){
	Personne *p=AllouePersonne();
	printf("donner le nom: ");
	scanf("%s",&p->nom);
	printf("donner le telephone: ");
	scanf("%s", &p->telephone);
	printf("donner la date: ");
	scanf("%d/%d/%d",&p->DATE.jour,&p->DATE.mois,&p->DATE.annee);
	p->suivant=NULL;
	return p;
}

Personne *RecherchePersonne(Personne *tete,char nom[]){
	if(tete==NULL){
		return NULL;
	}else {
		Personne *temp=tete;
		while(temp!=NULL){
			if(strcmp(temp->nom,nom)==0){
				return temp;
			}
			temp=temp->suivant;
		}
		return NULL;
	}
}

Personne *InserePersonne(Personne *tete){
	Personne *p=SaisiePersonne();
	
	if(tete==NULL){
		tete=p;
		return tete;
	}else{
		Personne *exist=RecherchePersonne(tete,p->nom);
		if(exist!=NULL){
			strcpy(exist->nom,p->nom);
			return tete;
		}else{
			Personne *temp=tete;
			Personne *temp2=NULL;
			while(temp!=NULL){
				if(strcmp(temp->nom,p->nom)==1){
					temp2=temp;
					temp=temp->suivant;
				}
				if(strcmp(temp->nom,p->nom)==-1){
					if(temp2==NULL){
						p->suivant=tete;
						tete=p;
					}else{
						p->suivant=temp;
						temp2->suivant=p;
					}
				}
			}
			return tete;
		}
	}
}

Personne *FusionnePersonne(Personne *tete1, Personne *tete2){
	if(tete1==NULL){
		return tete2;
	}
	if(tete2==NULL){
		return tete1;
	}
	if ()
	Personne *temp1=tete1;
	Personne *temp2=tete1;
	Personne *pre=NULL;
	Personne *exist=RecherchePersonne(tete1,temp2->nom);
	while(tete1 != NULL && tete2=NULL){
		if(exist!=NULL){
			temp2=temp2->suivant;
			
		}else{
			
		}
		exist=RecherchePersonne(tete1,temp2->nom);
		
	}
}

int main(){
	
}







