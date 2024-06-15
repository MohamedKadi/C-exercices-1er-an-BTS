#include <stdio.h>

int main(){
	int a, b, n = 0, m = 1, i = 1;
	
	printf("enter 'a': ");
	scanf("%d", &a);
	
	printf("enter 'b': ");
	scanf("%d", &b);
	
	while (i <= b){
		n = n+a;
		m = m*a;
		
		i++;
	}
	printf("n = %d		;		m = %d", n, m);
}
