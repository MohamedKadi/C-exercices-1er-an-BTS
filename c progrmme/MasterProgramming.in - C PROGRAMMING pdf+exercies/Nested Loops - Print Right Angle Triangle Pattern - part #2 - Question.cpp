#include <stdio.h>

int main(){
	int num;
	int j;
	printf("enter a num: ");
	scanf("%d", &num);
	
	for(int i = 1; i<=num ; i++){
		for ( j = 1 ; j <=i; j++ ){
		printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
