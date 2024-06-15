#include<stdio.h>
#define n 9

int main(){
	int T[n]={8,12,3,16,18,2,5,20,6};
	
	for(int i = 0; i <n;i++){
		for(int j=i+1; j <n;j++){
			if(T[i]>T[j]){
				int temp = T[i];
				T[i]=T[j];
				T[j]=temp;
			}
		}for(int i=0; i < n; i++){
			printf("%d	",T[i]);
		}printf("\n");
	}
	for(int i=0; i < n; i++){
		printf("%d	",T[i]);
	}	
	
}
