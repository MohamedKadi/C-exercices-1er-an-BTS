#include <stdio.h>
#include <math.h>


int main(){
	float x;
	int n, g = 0;
	
	printf("enter x: ");
	scanf("%f",&x);
	
	printf("enter n: ");
	scanf("%d",&n);
	
	for (int i = 0 ; i<=n ; i++){
		g= g + pow(x,i);
	}
	printf("%d\n", g);
}
