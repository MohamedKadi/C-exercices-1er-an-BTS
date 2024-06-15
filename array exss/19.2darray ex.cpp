#include<stdio.h>
#define n 2
#define m 2
int main(){
	int T1[n][m]={ {1,2},{3,4}};
	int T2[n][m]={ {5,6},{7,8}};
	int T[n][m];
	printf("T1:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m;j++){
			printf("%d ",T1[i][j]);
		}
		printf("\n");
	}
	
	printf("T2:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j <m;j++){
			printf("%d ",T2[i][j]);
		}
		printf("\n");
	}
	
	printf("T:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j <m;j++){
			T[i][j] = T1[i][j]+T2[i][j];
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
