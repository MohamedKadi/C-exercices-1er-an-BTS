#include <stdio.h>

int main() {
	int s = 0, n;
	
	printf("donner un nombre: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		s = s + i;
	}
	printf("la somme est: %d", s);
}
