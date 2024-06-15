#include <stdio.h>

int sumofdiv(int num){
	int sum = 0;
	for(int i = 1; i <= num; i++){
		if(num % i == 0){
			sum = sum + i;
			printf("the diviseur %d\n",i);
		}
	}
	return sum;
}


int main(){
	printf("the sum of %d divisions is %d",1,sumofdiv(1));
	return 0;
}
