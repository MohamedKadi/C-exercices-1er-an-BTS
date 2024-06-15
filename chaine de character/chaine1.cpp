#include<stdio.h>

int main(){
	char nom[100];
	
	printf("entrer le nom: ");
	fgets(nom,sizeof(nom),stdin);
	
	fputs(nom,stdout);
	printf("cya");
	
}
