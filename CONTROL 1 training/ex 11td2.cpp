#include<stdio.h>

int main(){
	
	int a = 28, b = 18, r;
	if(a%b == 0){
		printf("b est null");
	}else{
		for(int i = a%b; i != 0; i = a%b){
			r = a%b;
			if(r != 0){
					a = b;
					b = r;
			}else{
				break;
			}
		}
	}
	printf("b=%d",b);
	
	
	
	return 0;
}
