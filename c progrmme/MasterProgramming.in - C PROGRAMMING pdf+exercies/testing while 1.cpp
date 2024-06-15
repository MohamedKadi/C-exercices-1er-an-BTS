#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	
	printf("enter a specific nuumber of asterrisks: ");
	scanf("%d", &a);
	
	while (a > 0) {
		printf("*");
		a--;
	}
	return 0;
}
