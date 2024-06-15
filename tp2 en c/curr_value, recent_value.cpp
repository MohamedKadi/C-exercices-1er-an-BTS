#include <stdio.h>

int main(){
	int n, U = 1;
	
	int curr_value = 0;
	printf("donner un nombre: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		curr_value = U + 2;
		U = curr_value;
	}
	printf("U%d = %d", n, curr_value);	
}
