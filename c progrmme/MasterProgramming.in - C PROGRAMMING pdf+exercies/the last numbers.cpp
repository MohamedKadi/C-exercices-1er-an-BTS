#include <stdio.h>

#define size 10

int main(){
	int arr[size];
	for(int i = 0; i < size; i++){
		printf("enter 10 numbers: ", i+1);
		scanf("%d",&arr[i]);
	}
	for(int j = size-1; j >= 0; j--){
		printf("you entered in the last 10 days %d\n",arr[j]);
	}
	return 0;
}
