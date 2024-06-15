#include <stdio.h>

int main(){
	int size, num, k=0, ascending = 1;
	
	printf("enter size: ");
	scanf("%d",&size);
	
	for(int i = 1; i <= size; i++){
		printf("enter a number: ");
		scanf("%d",&num);
		if(num <= k){
			ascending = 0;
		}
		k = num;
	}
	if(ascending == 0){
		printf("not ascending numbers");
	}
	if(ascending == 1){
		printf("ascending numbers");
	}
	return 0;
}
