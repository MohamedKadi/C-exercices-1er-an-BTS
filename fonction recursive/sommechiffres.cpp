#include<stdio.h>
int compterchiffres(int n){
	if(n <= 9){
		return n;
	}
	
	return compterchiffres(n/10)+n%10; //n=784 => 78+4		=>7+8+4
	
}


int main(){
	int n;
	printf("Donner un nombre: ");
	scanf("%d",&n);
	printf("answer: %d",compterchiffres(n));
}
