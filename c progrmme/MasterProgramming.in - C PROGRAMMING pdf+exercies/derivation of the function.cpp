#include <stdio.h>
#include <math.h>

int derivation(int c, int x, int n){
	int y = n * c * pow(x,n-1);
	return y;
}

int main(){
	int c, x ,n;
	scanf("%d",&c);
	scanf("%d",&x);
	scanf("%d",&n);
	printf("%d*%d^%d=%d\n",c,x,n,derivation(c,x,n));
	return 0;
}
