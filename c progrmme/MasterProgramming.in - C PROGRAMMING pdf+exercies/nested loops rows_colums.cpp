#include <stdio.h>

int main(){
	int rows, colums;
	char symbol;
	
	printf("enter rows: ");
	scanf("%d",&rows);

	
	printf("enter colums: ");
	scanf("%d",&colums);
	
	scanf("%c",&symbol);
	
	printf("enter symbole: ");
	scanf("%c",&symbol);
	
	for (int i = 1; i <= rows; i++){
		for (int j = 1 ; j <= colums; j++ ){
			printf("%c", symbol);
		}
		printf("\n");
	}
	
	return 0;
}
