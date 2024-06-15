#include <stdio.h>

int main(){
	int a;										//a=grades
	
	do {
		printf("enter your grade: ");
		scanf("%d", &a);
	} while (a < 0 || a > 100);
	
	printf("nadi: %d ", a);
	return 0;
}
