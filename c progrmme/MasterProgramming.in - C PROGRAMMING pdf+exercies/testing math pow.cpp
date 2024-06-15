#include <stdio.h>
#include <math.h>

int main (){
	int a,power, count=1;
	printf("enter a number with the power: ");
	scanf("%d%d", &a, &power);
	
	while (0 < power){
		
		count = count*a; //
		power--;
		
	}
	printf("results = %d",count);
	
}
