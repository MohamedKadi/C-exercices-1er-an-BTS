#include<stdio.h>
#define n 5

int main(){
	int T1[n], T2[n];
	int k = n*2;
	int T[k];
	int i, j;
	printf("Donner les éléments de T1 : ");
	for(int i = 0; i < n; i++){
		printf("T[%d] : ",i);
		scanf("%d",&T1[i]);
	}
	printf("Donner les éléments de T2 : ");
	for(int i = 0; i < n; i++){
		printf("T[%d] : ",i);
		scanf("%d",&T2[i]);
	}
	k=0,i=0,j=0;
	while(i < n && j < n){
		if(T1[i] < T2[j]){
			T[k] = T1[i];
			i++;
		}else{
			T[k] = T2[j];
			j++;
		}
		k++;
	}
	while(i < n){
		T[k] = T1[i];
		i++;
		k++;
	}
	while(j < n){
		T[k] = T2[j];
		j++;
		k++;
	}
	for(int i = 0; i < n*2; i++){
		printf("T[%d] : %d	",i,T[i]);
	}
	
}
