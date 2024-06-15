#include<stdio.h>

int main(){
	int n[5];
	int x;
	int count = 0;
	printf("donner x: \n");
	scanf("%d",&x);
	printf("donner 5 numbers: \n");
	for(int i = 0; i < 5; i++){
		printf("T[%d] = ",i);
		scanf("%d",&n[i]);
	}
	for(int i = 0; i < 5; i++){
		if(n[i] == x){
			count++;
		}
	}
	
		printf("%d nombre d'occurence de la nombre x=%d dans le tableau",count,x);
	
}
