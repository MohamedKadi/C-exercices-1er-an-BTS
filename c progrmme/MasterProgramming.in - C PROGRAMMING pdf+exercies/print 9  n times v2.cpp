#include <stdio.h>

int length(int length){
	int result = 1;
	for(int i = 1; i <= length; i++){
		result = result * 10 + 9;
	}
	printf("answer: %d",result);
}

int main(){
	length(9);
	
	return 0;
}
