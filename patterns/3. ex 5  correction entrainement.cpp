#include<stdio.h>

/*int main(){
	int n = 7;
	int s = 0;
	int p = 1;
	
	for(int i = 1; i <=n ; i++){
		s=0;
		for(int j = 1; j <= i;j++){
			s = s+ j;
		}
		p = p * s;
	}
	printf("%d ", p);
}*/

int main(){
	int n = 10;
	int s = 0;
	int one = 1;
	
	for(int i = 1; i <= n; i++){
		one = 1;
		for(int j=1; j <= i;j++){
			one = one * (-1);
		}
		s = s + (i * one);
	}
	printf("%d", s);
}
