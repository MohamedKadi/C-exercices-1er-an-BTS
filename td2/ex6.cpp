#include <stdio.h>

int main(){
	
	int sum = 7, g=0;
	for(int i = 1; i < sum; i++){

		if (sum % i == 0){
			g=g+i;
		} 
	}
	if ( sum == g){
		printf("le nombre est parfait %d\n", sum);
	} else {
		printf("le nombre est n'est pas parfait %d\n", sum);
	}
	
		
	return 0;
}
