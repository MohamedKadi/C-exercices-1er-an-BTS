#include <stdio.h>

int main(){
	int size, num, even = 0, odd = 0;
	float subof_even_odd;
	printf("enter a size: ");
	scanf("%d",&size);
	for(int i = 1 ; i <= size ; i++){
		printf("enter a num: ");
		scanf("%d",&num);
		if(num % 2 == 0){
			even = even + num;
		}
		if(num % 2 != 0){
			odd = odd + num;
		}
	}
	printf("sum of even: %d\n",even);
	printf("sum of odd: %d\n",odd);
	subof_even_odd = even - odd;
	printf("sub of even and odd %f\n",subof_even_odd);
	return 0;
}
