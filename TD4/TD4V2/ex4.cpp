#include<stdio.h>
#define n 10

int main(){
	int T[n];
	int x, kas;
	for(int i = 0; i < n; i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	int j= n-1, i =0;
	while(i < j){
		kas = T[i];
		T[i] = T[j];
		T[j] = kas;
		j--;
		i++;
	}
	for(int i = 0; i < n; i++){
		printf("T[%d]= %d	",i,T[i]);
	}
}
