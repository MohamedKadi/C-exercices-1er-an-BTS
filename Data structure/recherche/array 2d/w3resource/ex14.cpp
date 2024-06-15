#include<stdio.h>
int lignetoiles(int x){
	for(int i = 0; i < x; i++){
		printf("*");
	}
}

int lignetoilesco(int x){
	printf("*");
	for(int i = 1; i < x-1; i++){
		printf(" ");
	}
	printf("*\n");
}

int main(){
	int n,m;
	printf("enter la taille n = ");
	scanf("%d",&n);
	printf("enter le n les lignes: ");
	scanf("%d",&m);
	lignetoiles(n);
	printf("\n");
	for(int i = 0; i < m-2; i++){
		lignetoilesco(n);
	}
	lignetoiles(n);
	
}
