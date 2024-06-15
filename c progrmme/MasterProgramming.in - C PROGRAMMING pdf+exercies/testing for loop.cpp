#include <stdio.h>

int main (){
	int num, pow, result=1, i;
	
	printf("enter num 1st: ");
	scanf("%d",&num);
	
	printf("enter power 2nd: ");
	scanf("%d",&pow);
	
	for (pow; pow > 0; pow--){
		result = result*num;
	}
	printf("Result: %d", result);
}
