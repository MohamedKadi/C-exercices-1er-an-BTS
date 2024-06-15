#include <stdio.h>

void max_min(int *num1, int *num2, int *max, int *min){
	if(*num1 >= *num2){
		*max = *num1;
		*min = *num2;
	}else{
		*max = *num2;
		*min = *num1;
	}
}

int main(){
	int a,b;
	int max,min;
	printf("enter a et b: ");
	scanf("%d%d",&a,&b);
	max_min(&a,&b,&max,&min);
	printf("le max est %d et le min est %d",max,min);
}
