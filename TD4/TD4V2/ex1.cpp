#include<stdio.h>
#define n 7

int main(){
	int x;
	int T[n];
	int i;
	printf("donner le nombre x: ");
	scanf("%d",&x);
	printf("donner les nombres de tableau: ");
	for(i = 0; i<n;i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	for(i=0; i<n;i++){
		if(T[i]==x){
			break;
		}
	}
	if(i == n){
		printf("n'appartient pas");
	}else{
		printf("appartient");
	}
}
