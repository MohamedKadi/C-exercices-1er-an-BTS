#include<stdio.h>
#include<math.h>

int main(){
	
	int n,k,p=0,i=0,r;
	printf("Donner un nombre binair: ");
	scanf("%d",&n);
	r=n;
	while(n != 0){
		k = n%10;
		if(k == 1){
			
			p = p+ pow(2,i);
		}
		i++;
			
		n = n/10;
	}
	printf("Decimal(%d)=%d",r,p);
}
