#include<stdio.h>
#define n 9

int main(){
	int T[n]={8,12,3,16,18,2,5,20,6};
	int tmp;
	for(int i = 0; i <n-1;i++){
		int j=i;
		while(T[j] > T[j+1] && j >=0){
			tmp = T[j];
			T[j] = T[j+1];
			T[j+1] = tmp;
			j--;
		}for(int i=0; i < n; i++)
				printf("%d	",T[i]);
				
		printf("\n");
	}
	for(int i=0; i < n; i++)
		printf("%d	",T[i]);
}
