#include<stdio.h>

int sommeChiffres(int n){
	if(n==0){
		return 0;
	}
	
	return sommeChiffres(n/10)+n%10;
}



int main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	printf("%d",sommeChiffres(n));
}
