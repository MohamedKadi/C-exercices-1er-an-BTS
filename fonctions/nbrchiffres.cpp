#include<stdio.h>

int nbrchiffres(int n){
	int i = 0;
	do{
		n = n/10;
		i++;
	}while(n != 0);
	return i;
}

int main(){
	int n;
	printf("donner un n: ");
	scanf("%d",&n);
	
	printf("%d",nbrchiffres(n));
	
}
