#include <stdio.h>

int main() {
	int p = 1, n;
	
	printf("donner un nombre: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		p = p * i;
	}
	printf("le produit est: %d", p);
}
