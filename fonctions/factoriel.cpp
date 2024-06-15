#include<stdio.h>

int factoriel(int n){
	int p = 1;
	for(int i=1; i <= n; i++){
		p = p * i;
	}
	return p;
}

int main(){
	int n;
	printf("donner un n: ");
	scanf("%d",&n);
	
	printf("%d",factoriel(n));
	
}
