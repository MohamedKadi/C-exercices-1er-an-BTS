#include <stdio.h>

int length(int length){
	int result = 1;
	for(int i = 1; i <= length; i++){
		printf("%d",result);
		result = result + 1;
	}
}

int main(){
	length(9);
	
	return 0;
}
