#include <stdio.h>

int main() {
	float a,b;
	printf("donner ax+b: ");
	scanf("%f%f", &a, &b);
	if (a == 0) {
		if (b != 0) {
			printf("l'ensemble vide");
		} else {
			printf("la solution est l'ensemble R");
		}
	} else {
		printf("la solution est %.2f",-b/a);
	}
}
