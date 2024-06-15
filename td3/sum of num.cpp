#include<stdio.h>

int main(){
	int n, k, s = 0, r;
	
	printf("enter un num: ");
	scanf("%d",&n);
	r = n;
	while(n != 0){
		k = n%10;
		s = s+k;
		n = n/10;
	}
	printf("Somme(%d) = %d",r,s);
	return 0;
}
