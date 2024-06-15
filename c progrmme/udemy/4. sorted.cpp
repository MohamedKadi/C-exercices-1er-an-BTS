#include <stdio.h>

int main(){
	int n[5] = {1,2,3,5,10};
	int sorted = 1;
	
	for(int i=0 ; i < 4; i++){
		if(n[i] >= n[i+1]){
			sorted = 0;
			break;
		}
	}
	if(sorted == 1){
		printf("sorted");
	}else{
		printf("NOT sorted");
	}
}
