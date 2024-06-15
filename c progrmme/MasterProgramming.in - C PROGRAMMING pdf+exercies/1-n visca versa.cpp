#include <stdio.h>

int main(){
	int num, i = 1, k;
	
	printf("enter num: ");
	scanf("%d", &num);
	k = num;
	while (i <= num){  // 1 2 3 4 5 ...
		printf("%d ", i);
		i++;
	}
	
	printf("\n");
	i = 1;

	while (k >= i){ //... 5 4 3 2 1
		printf("%d ", k);
		k--;
	}
}
