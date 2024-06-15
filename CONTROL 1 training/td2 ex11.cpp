#include<stdio.h>

int main(){
	
	int a = 3, b = 8, r;
	if(a%b == 0){
		printf("b est null");
	}else{
		for(int i = a%b; i != 0;i= a%b ){
			a = b;
			b = r;
			if(r == 0){
				break;
			}
		}
		printf("b = %d",b);
	}
	
	
	
	return 0;
}
