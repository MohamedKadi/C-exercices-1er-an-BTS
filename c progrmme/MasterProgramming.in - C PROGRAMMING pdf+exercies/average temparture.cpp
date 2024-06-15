#include <stdio.h>

int main(){
	int temp[7];
	int max = -300;
	int min = 1000;
	int sum = 0;
	float average;

	for(int i = 0; i <7; i++){
		printf("enter the T of the 7 days: ", i+1);
		scanf("%d",&temp[i]);
	}
	for(int i = 0; i < 7 ; i++){
		sum = sum + temp[i];
		if(temp[i] >= max){
			max = temp[i];
		}
		if(temp[i] < min){
			min = temp[i];
		}
	}
	average = (float) sum / 7;
	printf("the average is %.2f\nmax: %d\nmin: %d\n",average,max,min);
	return 0;
}
