#include <stdio.h>

void max(int x){
	if (x >= 10 && x <= 99){
		int first_num = x % 10;
		int second_num = x / 10;
		if(first_num < second_num ){
			printf("second num is the max: %d",second_num);
		}else if (first_num > second_num){
			printf("first num is the max: %d",first_num);
		}else{
			printf("there are equal: %d = %d",first_num, second_num);
		}
	}else{
		printf("please enter 2 digits only %d",x);
	}
}

int main(){
	int a;
	printf("enter 2 digits: ");
	scanf("%d",&a);
	max(a);
	
	return 0;
}
