#include <stdio.h>

int main(){
	int n, U0 = 1, U1 = 1;
	
	int curr_value = 0;
	printf("donner un nombre: ");
	scanf("%d", &n);
	
	for(int i = 1; i < n; i++){
		curr_value = U0 + U1;
		U0 = U1;
		U1 = curr_value;
	}
	printf("U%d = %d", n, curr_value);	
}
