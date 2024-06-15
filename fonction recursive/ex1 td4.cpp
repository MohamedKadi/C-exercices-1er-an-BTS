#include<stdio.h>
int afficheentiersdesc(int n){
	if(n!=0){
		printf("%d ",n);
		afficheentiersdesc(n-1);
	}
}
int afficheentiersasc(int n){
	if(n!=0){
		
		afficheentiersasc(n-1);
		printf("%d ",n);
	}
}


int main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	afficheentiersasc(n);
	printf("\n");
	afficheentiersdesc(n);
}
