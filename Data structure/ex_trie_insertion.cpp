#include<stdio.h>
#define n 9
int main(){
	int T[n]={8,12,3,16,18,2,5,25,6};
	int tmp;
	int j;
	for(int i = 0;i < n-1;i++){
		j=i;
		while(T[j] > T[j+1] && j >= 0){
			tmp = T[j];
			T[j] = T[j+1];
			T[j+1] = tmp;
			j--;
		}
	}
	for(int i = 0; i <n;i++){
		printf("T[%d]= %d	||",i,T[i]);
	}
}
