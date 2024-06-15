#include <stdio.h>

int main(){
	int A, B, R = 0, a, b;
	
	printf("entrer A et B: ");
	scanf("%d%d", &A, &B);
	
		b = B;
		a = A;
			
	while( A%B != R){

		R = A % B;
		if ( R == 0){
			printf("le PGCD(%d,%d) est: %d\n",a ,b ,B);
		} else{
			A = B;
			B = R;
		}
	}
	if ( A%B == 0){
		printf("le PGCD(%d,%d) est: %d",a ,b ,B);
	}
}
