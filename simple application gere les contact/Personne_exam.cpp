#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char nom[100];
	char tel[11];
}Personne;

typedef struct Maillon {
	Personne p;
	Maillon *suivant;
}Maillon;

Personne *Saisir_Personne2(){
	Personne *p=(Personne *) malloc(sizeof(Personne));
	printf("donner votre nom: ");
	fgets(p->nom,sizeof(p->nom),stdin);
	printf("donner votre tel: ");
	fflush(stdin);
	scanf("%s",p->tel);
	
	//fgets m3a scanf kadir mochkil
	
	return p;
}

Personne Saisir_Personne(){
	Personne P;
	printf("donner votre nom: ");
	fgets(P.nom,sizeof(P.nom),stdin);
	printf("donner votre tel: ");
	fflush(stdin);
	
	fgets(P.tel,sizeof(P.nom),stdin);
	
	return P;
}

void Affiche_Personne2(Personne *P){
	P->nom[strcspn(P->nom, "\n")] = '\0';
	printf("%-100s%s\n",P->nom,P->tel);
}

void Affiche_Personne(Personne P){
	P.nom[strcspn(P.nom, "\n")] = '\0';
	//P.nom[strlen(P.nom)-1] = '\0';
	printf("%-100s%s\n",P.nom,P.tel);
}

Maillon *Recherche_Personne(Maillon *tete,char nomp[100]){	
	if(tete==NULL){
		return NULL;
	}else{
		int n;
		Maillon *temp=tete;
		while(temp!=NULL){
			n=strcmp((temp->p).nom,nomp);
			if(n==0){
				return temp;
			}
			temp=temp->suivant;
		}
		return NULL;
	}
}

Maillon *Modifie_Personne(Maillon *tete, char nomp[100], char nvtel[11]){
	
	if(tete==NULL){
		return NULL;
	}else{
		Maillon *temp=Recherche_Personne(tete,nomp);
		if(temp!=NULL){
			strcpy((temp->p).tel, nvtel);
			return tete;
		}else{
			return NULL;
		}
	}
}

Maillon *Ajouter_Personne(Maillon *tete, Personne P){
	Maillon *p=(Maillon *) malloc(sizeof(Maillon));
	(p->p)=P;
	p->suivant=NULL;
	if(tete==NULL){
		tete=p;
	}else{
		Maillon *temp=tete;
		Maillon *temp2=NULL;
		if(Recherche_Personne(tete,p->p.nom)!=NULL){
			Modifie_Personne(tete, p->p.nom, p->p.tel);
		}else{
			while(temp!=NULL){
				if(strcmp(P.nom,temp->p.nom) > 0){
					temp2=temp;
					temp=temp->suivant;
				}else{
					if(temp2==NULL){
						p->suivant=tete;
						tete=p;
						return tete;	
					}
					temp2->suivant=p;
					p->suivant=temp;
					return tete;
				}
			}
			if(temp==NULL){
				temp2->suivant=p;
			}		
		}	
	}
	return tete;
}

void Affiche_Liste(Maillon *tete){
	if(tete==NULL){
		printf("la list est vide");
	}else{
		Maillon *temp=tete;
		while(temp!=NULL){
			Affiche_Personne(temp->p);
			temp=temp->suivant;
		}
	}
}

Maillon *Supprimer_Liste(Maillon *tete){
	Maillon *temp = tete;
    Maillon *suivant = NULL;
    
    while (temp != NULL) {
        suivant = temp->suivant; // Store the next node
        free(temp); // Free the current node
        temp = suivant; // Move to the next node
    }
    
    // Return NULL to indicate the list is empty
    return NULL;
}

int main(){
	Personne p1;
	Maillon *tete=NULL;
	//p1=Saisir_Personne();
	//Affiche_Personne(p1);
	tete=Ajouter_Personne(tete,Saisir_Personne());
	Affiche_Liste(tete);
	tete=Ajouter_Personne(tete,Saisir_Personne());
	Affiche_Liste(tete);
	tete=Ajouter_Personne(tete,Saisir_Personne());
	Affiche_Liste(tete);
	tete=Ajouter_Personne(tete,Saisir_Personne());
	Affiche_Liste(tete);
	
	tete=Supprimer_Liste(tete);
	Affiche_Liste(tete);
	
	
	
	return 0;
}
