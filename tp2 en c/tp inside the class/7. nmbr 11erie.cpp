#include <stdio.h>

int main() {
	int n, k;
	printf("donner un nombre: ");
	scanf("%d", &n);
	
	
	
	
	for(int i = 2 ; i <= n ; i++){
		k = i;
		int x = 0;
		for(int j = 2; j <= i/2 ;j++){
			if(i % j == 0){
				x = 1;
				k = i;
				break;
			}
		}
		if(x == 0){
				printf("%d	", k);
			}
		
	}
}
