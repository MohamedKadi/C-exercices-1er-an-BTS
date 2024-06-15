#include<stdio.h>
#define n 10
int main() {
	int T[n]={ 2, 9, 1, 2, 6, 6, 7, 8, 2, 3};
	int x = 2;
	int j=n-1;
	int i=0;
	for(i=0; i <= j;i++){
			int temp = T[i];
			T[i]=T[j];
			T[j]=temp;
			j--;
	}
	for(int i=0; i < n; i++){
		printf("%d ",T[i]);
	}
	
}
