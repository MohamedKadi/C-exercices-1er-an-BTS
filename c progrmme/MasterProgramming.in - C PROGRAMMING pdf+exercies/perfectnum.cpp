#include <stdio.h>

void sumofdiv(int num){
	int sum = 0;
	for(int i = 1; i < num; i++){
		if(num % i == 0){
			sum = sum + i;
		}
	}
	if(sum == num){
		printf("the num is perfecct %d", num);
	}else{
		printf("the num is not perfecct %d", num);
	}
}


int main(){
	sumofdiv(5);
	return 0;
}
