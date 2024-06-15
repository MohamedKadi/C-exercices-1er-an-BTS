#include <stdio.h>

int main() {
	int a, b ,c;
	printf("donner a et b et c: ");
	scanf("%d%d%d", &a,&b,&c);
	if (a >= b && a >= c) {
		printf("%d > %d et %d",a,c,b);
	} else if (b >= a && b >= c) {
		printf("%d > %d et %d",b,c,a);
	} else 
	printf("%d > %d et %d",c,a,b);
	
	return 0;
}
