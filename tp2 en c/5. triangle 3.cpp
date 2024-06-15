#include <stdio.h>

int main(){
	int n;
	int x = 1;
	int r = 0;
	printf("donner un nombre: ");
	scanf("%d", &n);
	for(int i = n; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			printf(" ");
		}
		int z = n-(n-x)+r;
		x++;
		r++;
		for(int y = 1; y <= z ; y++){
				printf("*");
			}
		printf("\n");
	}
}
