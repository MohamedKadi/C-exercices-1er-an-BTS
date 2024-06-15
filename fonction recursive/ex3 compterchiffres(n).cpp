#include<stdio.h>
int compterchiffres(int n){
	if(n<=9){
		return 1;
	}
	
	return compterchiffres(n/10)+1;
	
}


int main(){
	int n;
	printf("Donner un nombre: ");
	scanf("%d",&n);
	printf("answer: %d",compterchiffres(n));
}
