#include<stdio.h>
#include<stdbool.h>
//question 1
int nbrchiffres(int n){
	int i = 0;
	do{
		n = n/10;
		i++;
	}while(n != 0);
	return i;
}
//question 2
int factoriel(int n){
	int p = 1;
	for(int i=1; i <= n; i++){
		p = p * i;
	}
	return p;
}
//question 3
bool estpremier(int n){
	for(int i = 2; i <= n/2 ;i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
//question (menu)
int menu(){
	int x;
	printf("Sortir				-->0\n");
	printf("nombrchiffres			-->1\n");
	printf("factoriel			-->2\n");
	printf("estpremier			-->3\n");
	do{
		printf("Quel est votre choix?: \n");
		scanf("%d",&x);
	}while( x>3 || x<0 );
	return x;	
}
//fonction principal;
int main(){
	int choix = menu();
	while(choix != 0){
		if(choix == 1){
			int n;
			printf("donner un n: ");
			scanf("%d",&n);
	
			printf("%d\n",nbrchiffres(n));
		}if(choix==2){
			int n;
			printf("donner un n: ");
			scanf("%d",&n);
	
			printf("%d\n",factoriel(n));
		}if(choix == 3){
			int n;
				printf("donner un n: ");
				scanf("%d",&n);
	
			if(estpremier(n)==true){
				printf("%d : est Premier\n",n);
			}else{
			printf("%d : est non Premier\n",n);
			}
		}
		choix = menu();
	};
}
