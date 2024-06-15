#include<stdio.h>

int main(){
	int n[5];
	int x;
	int apartient = 0;
	printf("donner x: \n");
	scanf("%d",&x);
	printf("donner 5 numbers: \n");
	for(int i = 0; i < 5; i++){
		printf("T[%d] = ",i);
		scanf("%d",&n[i]);
	}
	for(int i = 0; i < 5; i++){
		if(n[i] == x){
			apartient = 1;
		}
	}
	if(apartient == 1){
		printf("%d apartient a T[n]",x);
	}else{
		printf("%d n'apartient pas a T[n]",x);
	}
		
	
}
