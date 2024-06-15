#include <stdio.h>
#include <math.h>

int main(){
	int num, u;
	printf("enter num: ");
	scanf("%d", &num);
	
	if ( num >= 1){
		if ( num == 2 || num == 3){
			printf("le nombre est premier");
		} else {
			for (int i = 2; i <= sqrt(num); i++){
				if (num % i == 0){
					printf("le nombre est non premier\n");
				} else {
					printf("le nombre est premier\n");
				}
			}
		}
	} else {
		printf("le nombre est non premier");
	}
}
