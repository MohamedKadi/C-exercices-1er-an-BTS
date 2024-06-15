#include <stdio.h>

int main(){
	int i = 1, n, k = 1, h = 0;
	
	printf("enter n: ");
	scanf("%d", &n);
	
	while (i <= n) { 						// 5;
		k= (k * n); 						// 5=1*5 ; 5*5=25 ; 25*5=... ;
		h= (h + n);							// 0+5=5 ; 5+5=10 ; 10+5= 15 ...;
		i++;
	}
	printf("%d	;	%d",k ,h);
	
}
