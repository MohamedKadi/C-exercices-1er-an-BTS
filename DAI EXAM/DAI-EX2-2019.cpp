#include<stdio.h>
#include<stdbool.h>

struct Element{
	int data;
	struct Element *suivant;
};

bool estvide(Element *tete){
	return tete==NULL;
}

void insererQueue(Element **tete, int x){
	struct Element *E;
	E->data=x;
	E->data=NULL;
	if(tete==NULL){
		*tete=E;
	}else{
		struct Element *temp=*tete;
		while(temp->suivant!=NULL){
			temp=temp->suivant;
		}
		temp->suivant=E;		
	}
}

void afficher(Element * tete){
	if(tete==NULL){
		printf("list est vide");
	}else{
		struct Element *temp=tete;
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->suivant;
		}
	}
}

int main(){
	struct Element *tete;
	int x=4;
	tete=insererQueue(*tete,x);
	afficher(tete);
}

