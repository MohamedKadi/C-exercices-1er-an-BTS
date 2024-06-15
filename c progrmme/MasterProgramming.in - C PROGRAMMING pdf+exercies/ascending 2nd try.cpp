#include <stdio.h>

int main(){
	int size, num, ascending = 1, pre_num = 0;
	printf("enter a size: ");
	scanf("%d",&size);
	for(int i = 1; i <= size;i++){
		printf("enter a num: ");
		scanf("%d",&num);
		if(num <= pre_num){
			ascending = 0;
		}
		pre_num = num;
	}
	if( ascending == 0){
		printf("not ascending");
	}else{
		printf("very ascending");
	}
	return 0;
}
