#include<stdio.h>
#include<math.h>

int main(){
	int n;
	int k,p=0,i=0,r;
	
	printf("Donner un nombre decimal: ");
	scanf("%d",&n);
	k = n;
	while(n != 0){
		r = n%2;
		n = n/2;
		
		if(r == 1){
			p = p+ pow(10,i);
		}
		i++;
	}
	printf("Binaire(%d) = %d",k,p);
	return 0;
}
