#include <stdio.h>

int main() {
	int x;
	printf("enter un valeur: ");
	scanf("%d", &x);
	if (x >= 0) {
		printf("| %d | = %d", x, x);
	} else {
		printf("| %d | = %d", x, x*(-1));
	}
	
	
	return 0;
}
