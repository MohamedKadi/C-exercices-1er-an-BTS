#include<stdio.h>
int somme(int n){
	
	if(n==1){
		return 1;
	}
	
	return somme(n-1)+n;
	
}


int main(){
	int n;
	printf("Donner un nombre: ");
	scanf("%d",&n);
	printf("answer: %d",somme(n));
}
