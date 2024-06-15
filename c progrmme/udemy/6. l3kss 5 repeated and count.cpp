#include <stdio.h>

int main(){
	int n[5] = {1,3,3,3,1};
	int repeat= 1;
	int count = 0;
	
	for(int i = 0; i < 5; i++){
		repeat = 0;
		for(int j = 0; j < 5; j++){
			if(j != i && n[i] == n[j]){
				count++;
				repeat = 1;				
		
			}
		}
		
	}
	if(repeat == 1){
				printf("%d	", count);				
			}
}
