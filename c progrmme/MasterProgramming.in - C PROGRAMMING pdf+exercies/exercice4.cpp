#include<stdio.h>

int main(){
	int a, b;
	printf("entre a et b: ");
	scanf("%d %d",&a ,&b);
	if (a > b) {
		printf("a = %d is greater than b = %d", a ,b);
	} else if (a < b) {
		printf("a = %d is less than b = %d", a ,b);
	} else {
		printf("a = %d is equal b = %d", a ,b);
	}
}
