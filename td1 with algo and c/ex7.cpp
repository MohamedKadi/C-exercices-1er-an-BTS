#include <stdio.h>

int main() {
	int a,b,r;
	printf("donner a et b: ");
	scanf("%d%d", &a, &b);
	if (a >= 10 && a <=99 && b >= 10 && b <=99) {
		r = ((b/10)*1000+(a/10)*100+(a%10)*10+(b%10));
		printf("a= %d et b= %d donc r= %d", a, b, r);
	} else {
		printf("erreur");
	}
	return 0;
}
