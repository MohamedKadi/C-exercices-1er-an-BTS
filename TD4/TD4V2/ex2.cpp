#include<stdio.h>
#define n 7

int main(){
	int T[n];
	int count=0;
	int x;
	printf("enter x: ");
	scanf("%d",&x);
	printf("enter les nombres de tableau\n");
	for(int i = 0; i < n;i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	for(int i = 0; i < n; i++){
		if(T[i]== x){
			count++;
		}
	}
	printf("%d c'est le nombre d'occurrences de %d",count,x);
}
