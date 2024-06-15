#include<stdio.h>
int puissance(int n, int x){
	if(n==1){
		return x;
	}
	return puissance(n-1,x)*x;
}


int main(){
	int n,x;
	printf("donner un nombre: ");
	scanf("%d",&n);
	printf("donner x: ");
	scanf("%d",&x);
	printf("%d",puissance(n,x));
}
