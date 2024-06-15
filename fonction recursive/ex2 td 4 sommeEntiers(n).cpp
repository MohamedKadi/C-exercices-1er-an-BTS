#include<stdio.h>

int sommeEntiers(int n){

	if(n!=0){
		return sommeEntiers(n-1)+n;
	}
}



int main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	printf("%d",sommeEntiers(n));
}
