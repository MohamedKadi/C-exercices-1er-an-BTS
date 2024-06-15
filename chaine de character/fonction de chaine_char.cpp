#include<stdio.h>
#include<string.h>

int main(){
	char nom[100], nom2[50];
	
	
	
	
	printf("donner le nom: ");
	fgets(nom,sizeof(nom),stdin);		//concat ktrj3 sttr hit fgets fiha flkhr \n
	
	printf("la taille de votre nom est %d\n", strlen(nom)-1); // zyda 1 cuz of /n
	
	printf("%s\n",strcpy(nom2,nom));
	
	
	strcpy(nom2,"bonjour");
	
	if(strcmp(nom,nom2)==0){
		printf("egaux\n");
	}else if(strcmp(nom,nom2)==1){
		printf("nom>nom2\n");
	}else{
		printf("nom<nom2\n");
	}
	
	
	strcat(nom,nom2);
	printf("concatination : %s",nom);
	
}
