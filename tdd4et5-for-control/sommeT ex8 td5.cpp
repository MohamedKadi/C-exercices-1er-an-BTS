#include<stdio.h>

int sommeT(int T[],int n){
	if(n==0){
		return T[0];
	}
	return T[n]+sommeT(T,n-1);
	
}

int main(){
	int n=5;
	int T[n]={1,2,3,4,5};
	
	printf("%d",sommeT(T,n-1));
	
}
