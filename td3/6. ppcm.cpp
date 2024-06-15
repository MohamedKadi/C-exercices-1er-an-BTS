#include<stdio.h>

int main(){
	int n;
	int m = 2, k = 2;
	int a,b;
	printf("enter a num: ");
	scanf("%d",&a);
	printf("enter a num: ");
	scanf("%d",&b);
	int p = a*m;
	if(a == b){
		printf("pcm:%d",a);
	}else{
		while((a*m)!=(b*k)){
		
		if(a*m>b*k){
			k++;
		}else{
			m++;
		}
	}
	printf("ppcm:%d",a*m);
	}
	
	return 0;
}

