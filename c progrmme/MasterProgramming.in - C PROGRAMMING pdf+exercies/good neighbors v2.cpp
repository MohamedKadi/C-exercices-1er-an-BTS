#include <stdio.h>

#define size 5

int main(){
	int arr[size];
	
	
	for(int i = 0; i < size; i++){
		printf("enter 5 numbers: ");
		scanf("%d",&arr[i]);
	}
	
	int neighbors = 0;

	
	for(int i = 1; i < size - 1; i++){
		if(arr[i] == arr[i+1] * arr[i-1]){
			printf("good neighbors");
			int neighbors = 1;
			return 0;
		}
	}
		if(neighbors == 0){
		printf("cut this nigga off");
	}
	return 0;
}
