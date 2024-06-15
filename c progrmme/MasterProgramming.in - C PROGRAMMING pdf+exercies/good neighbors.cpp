#include <stdio.h>

int main(){
	int arr[5];
	
	
	for(int i = 0; i < 5; i++){
		printf("enter 5 numbers: ");
		scanf("%d",&arr[i]);
	}
	
	int old = arr[0];
	int curr = arr[1];
	
	for(int i = 2; i < 5; i++){
		if(old * curr == arr[i]){
			printf("array has good neighbors %d and %d\n",old,curr);
			old = curr;
			curr = arr[i];
		}else {
			printf("array does not have good neighbors %d and %d\n",old,curr);
			old = curr;
			curr = arr[i];
		}
	}
	return 0;
}
