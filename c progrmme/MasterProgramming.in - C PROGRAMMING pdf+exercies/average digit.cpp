#include <stdio.h>

float numdigit(int num, int digit){
	int result = 0, x = 0;
	while(num > 0){
		int i = num % 10;
		if(i < digit){
			x = x + i;
			result = result + 1;
		}
		num = num /10;
	}
	printf("the digits that less than are %d\n", result);
	return x/digit;
}

int main(){
	printf("%.2f\n",numdigit(125,3));
	
	return 0;
}
