#include <stdio.h>
int iseven(int num){
	if(num <0){
		printf("please enter a positive number");
	}else{
	if(num % 2 == 0){
		return 1;
	}else{
		return 0;
	}
	}
}


int main(){
	int x;
	printf("enter x: ");
	scanf("%d",&x);
	if(x >= 0){
	printf("anwser is: %d",iseven(x));
	return 0;
	} else{
		printf("please enter a positive number");
	}
}
