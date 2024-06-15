#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
	float x;
	float y;
}point;

typedef struct maillon maillon;
struct maillon{
	point e;
	maillon *suivant;			//declaration of maillon khass tkon qbl bach i3rfha hna :)
};

point *lirepoint(){
	point *p;
	p=(point *) malloc(sizeof(point));
	printf("donner x: ");
	scanf("%f",&(*p).x);
	printf("donner y: ");
	scanf("%f",&p->y);
	return p;
}



maillon *creermaillon(point e){
	maillon *m;
	m=(maillon *) malloc(sizeof(m));
	m->e.x=e.x;
	m->e.y=e.y;
	m->suivant=NULL;
	return m;
}

maillon *creerliste(point e){
	maillon *tete = creermaillon(e);
	return tete;
}

bool estVide(maillon *tete){
	return tete==NULL;
}

int tailleliste(maillon *tete){
	maillon *temp;
	temp = tete;
	int i = 0;
	while(temp!=NULL){
		temp = temp->suivant;
		i++;
	}
	return i;	
}

void affichepoint(point *p){
	printf("%.2f,%.2f\t",p->x,p->y);
}
void affichepoint2(point p){
	printf("%.2f,%.2f\t",p.x,p.y);
}

void affichelist(maillon *tete){
	maillon *temp=tete;
	while(temp!=NULL){
		affichepoint2(temp->e);
		//affichepoint(&temp->e);
		temp=temp->suivant;
	}
}

maillon *ajouttete(maillon *tete, point e){
	maillon *m = creermaillon(e);
	m->suivant = tete;
	tete = m;
	return tete;
}

maillon *ajoutqueue(maillon *tete,point e){
	maillon *n = creermaillon(e);
	if(tete==NULL){
		tete = n;
	}else{
		maillon *dernier = tete;
		while(dernier->suivant != NULL){
			dernier = dernier->suivant;
		}
		dernier->suivant = n;	
	}
	return tete;
	
}

maillon *supprimerliste(maillon *tete){
	maillon *temp = tete;
	while(temp != NULL){
		temp = temp->suivant;
		free(tete);
		tete=temp;
		
	}
	return NULL;
}


bool existepoint(maillon *tete,point e){
		
}

int main(){
	maillon *tete=NULL;
	point *e;
	e=lirepoint();
	tete=creermaillon(*e);	//tete=creermaillon()
	printf("la taille de la liste avant ajoute est: %d \n", tailleliste(tete));
	affichelist(tete);
	printf("\n");
	tete=ajouttete(tete,*lirepoint());
	printf("la taille de la liste apres l'ajoute' est: %d \n", tailleliste(tete));
	affichelist(tete);
	
	printf("\n");
	tete = ajoutqueue(tete,*lirepoint());
	printf("la taille de la liste apres l'ajoute' est: %d \n", tailleliste(tete));
	affichelist(tete);
	
	printf("\n");
	tete=supprimerliste(tete);
	printf("la taille de la liste apres supprimer est: %d \n", tailleliste(tete));
	affichelist(tete);
	
	
	
		
	return 0;
}

