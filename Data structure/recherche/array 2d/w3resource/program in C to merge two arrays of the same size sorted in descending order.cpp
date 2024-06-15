#include<stdio.h>
#define n 3
int main(){
	int T1[n]={1,2,3},T2[n]={3,2,1};
	int T[n*2];
	int k = 0;
	for(int i = 0; i < n; i++){
		T[i]=T1[i];
		k++;
	}
	int j = 0;
	for(int i = (n*2)-k; i < n*2; i++){
		T[i] = T2[j];
		j++;
	}
	int temp;
	for(int i =0 ; i < n*2; i++){
		for(int j = 0; j < n*2; j++){
			if(T[i]<T[j]){
				temp = T[i];
				T[i]=T[j];
				T[j]=temp;
			}
		}
	}
	
	for(int i = 0; i < n*2;i++){
		printf("%d ",T[i]);
	}
}
