#include<stdio.h>
#define n 23
int main(){
	int T[n]={3,2,2,5,11,25,7,28,16,23,0,5,4,7,8,99,66,2,34,24,15,36,250};
	int T1[n];
	int k = 0;
	for(int i = 0; i < n; i++){
		int unique = 1;
		for(int j = 0; j < n; j++){
			if(T[i]==T[j] && i != j){
				unique = 0;
			}
		}
		if(unique == 1){
			T1[k] = T[i];
			k++;
		}
	}
	for(int i = 0; i < k;i++){
		printf("%d ",T1[i]);
	}
}
