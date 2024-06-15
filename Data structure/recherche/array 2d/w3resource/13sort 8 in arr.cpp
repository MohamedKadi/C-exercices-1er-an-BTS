#include<stdio.h>

int main(){
	int n = 5;
	int T[n]={2,5,7,9,11};
	int temp;
	int i,j;
	int x = 10;
	for(i=0; i<n; i++){
		if(T[i] > x){
			break;
		}
	}
	for(j = n ; j > i; j--){
		T[j]=T[j-1];
		
	}
	T[i]=x;
	for(int i=0; i<= n; i++){
		printf("%d ",T[i]);
	}
}
