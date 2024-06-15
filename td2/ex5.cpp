#include <stdio.h>

int main(){
	int n, g = 0;
	
	printf("donner n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <=n; i++){
		if (i % 3 != 0 && i % 2 == 0){
			g= g+i;
			printf("%d", g);

		}		
	}
}
