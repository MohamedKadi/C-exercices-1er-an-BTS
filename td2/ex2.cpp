#include <stdio.h>

int main(){
	int i = 1, j, n, k =0;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	while (i <= n){
		k = k +i;
		i++;
	}
	printf("%d ",k);
	return 0;
}
