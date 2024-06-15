#include <stdio.h>

int main(){
	int n, curr_value= 1, pre_value= 1, Un;
	
	printf("enter n: ");
	scanf("%d",&n);
	
		for (int i = 0 ; i <= n; i++){ 	
			Un = curr_value + pre_value;	
			pre_value = curr_value;
			curr_value = Un;				
			}
	printf("la reponse est %d", pre_value);
}
