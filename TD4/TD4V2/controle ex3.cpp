#include<stdio.h>

int main(){
	int n, occ=0,x,k;
	printf("donner un entier: ");
	scanf("%d",&n);
	printf("donner un chiffre x: ");
	scanf("%d",&x);
	while(n != 0){
		k= n%10;
		if(k == x){
			occ++;
		}
		n = n/10;
	}
	printf("occurrences(%d) = %d",x,occ);
	
}
