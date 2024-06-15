#include<stdio.h>

int main(){
	int n,k, p = 0,r;
	r=n;
	printf("Donner un entier: ");
	scanf("%d",&n);
	while(n != 0){
		k = n%10;
		p = p*10+k;
		n = n/10;
	}
	
	
	printf("Miroir(%d)=%d",r,p);
	
	return 0;
}
