#include <stdio.h>

int main(){
	int a,b,c;
	printf("donner a et b et c: ");
	scanf("%d%d%d",&a ,&b ,&c);
	
	//1st search for max
	if (a >= b && a >= c) {
		printf("%d est le max\n",a);
	}
	else if (b >= a && b >= c){
		printf ("%d est le max\n",b);
	} else {
		printf ("%d est le max\n",c);
	}
	//2nd search for min
	if (a <= b && a <= c) {
		printf("%d est le min\n",a);
	}
	else if (b <= a && b <= c){
		printf ("%d est le min\n",b);
	} else {
		printf ("%d est le min\n",c);
	}
}
