#include <stdio.h>

int main(){
	int N, S = 0;
	
	printf("enter a number: ");
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		S= S+i;
	}
	printf("la somme est: %d", S);

}
