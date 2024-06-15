#include <stdio.h>

int main(){
	int rows, colums , i;
	
	printf("rows: ");
	scanf("%d", &rows);
	
	/* printf("colums: ");
	scanf("%d", &colums); 
	***
	**
	*
	
	
	*/ 
	for ( i = 1; i <= rows; rows--){
		for (colums = 1; colums <=rows-i+1; colums++){
			printf("* ");
		}
		
		printf("\n");
	}
}
