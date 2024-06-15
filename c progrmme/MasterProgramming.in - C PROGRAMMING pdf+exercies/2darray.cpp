#include <stdio.h>
#define size 10

int main(){
	int i,j;
	int array2d[size][size];
	
	for(int i=1;i<=size;i++){
		for(int j=1;j<size;j++){
			array2d[i][j] = i*j;
		}
	} for(int i=1;i<size;i++){
		for(int j=1;j<size;j++){
			printf("%5d",array2d[i][j]);
		}
	printf("\n");
	}
}
