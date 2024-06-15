#include<stdio.h>

struct date {
	int jour;
	int mois;
	int annee;
};

int main(){
	struct date x;
	
	do{
		printf("donner jour: ");
		scanf("%d",&x.jour);
	}while(x.jour < 1 || x.jour > 31);
	do{
		printf("donner mois: ");
		scanf("%d",&x.mois);
	}while(x.mois < 1 || x.mois > 13);
	do{
		printf("donner annee: ");
		scanf("%d",&x.annee);
	}while(x.annee < 999 || x.annee > 9999);
	
	
}
