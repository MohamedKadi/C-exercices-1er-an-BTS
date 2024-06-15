#include<stdio.h>

int main(){
	int n, x, k, count=0;
	
	printf("Donner un entier: ");
	scanf("%d",&n);
	printf("Donner le chiffre: ");
	scanf("%d",&x);
	
	while(n != 0){
		k = n%10;
		if(x == k){
			count++;
		}
		
		n = n/10;
	}
	printf("Occurrences(%d) = %d",x,count);
	return 0;
}
