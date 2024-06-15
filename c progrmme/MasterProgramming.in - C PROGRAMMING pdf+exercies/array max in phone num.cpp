#include <stdio.h>

#define size 10

int main(){
	int phone_num[size];
	int max_num = phone_num[0];
	int num;
	int curr_digit;
	int max;
	
	
	for(int i = 0; i < size; i++){
		printf("enter num: ");
		scanf("%d",&phone_num[i]);
	} for(int i =0; i<size ;i++){
		if(max_num < phone_num[i]){
			max = i;
			max_num = phone_num[i];
		}
	}
	printf("le max est %d \net le num est %d",max_num ,max);
}
