#include <stdio.h>
#define n 2
#define m 3

int main(){
	int M[n][m]={ {0,1,2},{3,4,5}};
	
	for(int i= 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("enter la matrice T[%d,%d]= ",i,j);
			scanf("%d",&M[i][j]);
		}
		printf("==========================================\n");
	}
	
	for(int i= 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ",M[i][j]);
		}printf("\n");
	}
}
