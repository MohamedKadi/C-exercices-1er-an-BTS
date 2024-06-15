#include <stdio.h>

int main(){
	int i = 1, n, k = 1;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	while (i <= n) { 					// 1 2 3 4 5
		k= (k * i); 						// 1=1*1 ; 1*2=2 ; 2*3=6 ; 6*4=24; ...
		i++;
	}
	printf("%d ",k);
	
}
