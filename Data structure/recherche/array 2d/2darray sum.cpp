#include<stdio.h>
#define n 2
#define m 3

int main(){
	int T1[n][m],T2[n][m],T3[n][m];
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			printf("T1[%d][%d]= ",i,j);
			scanf("%d",&T1[i][j]);
		}
	}printf("=====================================\n");
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			printf("T2[%d][%d]= ",i,j);
			scanf("%d",&T2[i][j]);
		}
	}
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			T3[i][j] = T2[i][j] + T1[i][j];
		}
	}printf("=====================================\n");
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			printf("T1[%d][%d]= %d ",i,j,T1[i][j]);
		}
		printf("\n");
	}printf("=====================================\n");
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			printf("T1[%d][%d]= %d ",i,j,T2[i][j]);
		}printf("\n");
	}printf("=====================================\n");
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			printf("T2[%d][%d]= %d ",i,j,T3[i][j]);
		}printf("\n");
	}
}











