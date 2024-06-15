#include<stdio.h>
int fib(int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 2;
	}
	
	return fib(n-1)+fib(n-2);
	
}


int main(){
	int n;
	printf("Donner un nombre: ");
	scanf("%d",&n);
	printf("answer: %d",fib(n));
}
