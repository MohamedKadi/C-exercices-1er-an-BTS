#include<stdio.h>

int main(){
	char ch[100];
	char nom[100];
	//scanf("%s",ch);
	
	fgets(nom,sizeof(nom),stdin);
	
	int i=0;
	while(nom[i]!='\n'){
		i++;
	}
	printf("fgets la taille de nom est %d\n",i);
	
	/*for(int i; i < 100;i++){
		if(ch[i]== '\0'){
			printf("la taille = %d",i);
			break;
		}
	}*/
}
