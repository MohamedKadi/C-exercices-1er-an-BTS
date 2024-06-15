#include <stdio.h>

int main () {
	int a,b=0,c=0;
	
	printf("enter you grades and if you wanna end it enter -1: ");
	scanf("%d",&a);
	
	while (a != (-1)){
		c = c + a;
		b++;
		printf("enter you grades and if you wanna end it enter -1: ");
		scanf("%d",&a);
	}
	printf("your total grades %d and total %d and your result is %d ",b,c,c/b);
}
