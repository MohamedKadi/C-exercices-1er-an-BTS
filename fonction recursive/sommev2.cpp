#include<stdio.h>
int somme(int n){
	if(n==1){
		return 1;
	}
	return somme(n-1)+n;
}


int main(){
	int n;
	printf("donner un nombre: ");
	scanf("%d",&n);
	printf("%d",somme(n));
}
