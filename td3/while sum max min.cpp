#include<stdio.h>

int main(){
	int n,s=0, max=-99999,min=99999;
	printf("enter a number: ");
	scanf("%d",&n);
	while(n!=0){
		s = s+n;
		printf("enter a number: ");
		scanf("%d",&n);
		if(n > max){
			max = n;
		}
		if(n < min){
			min = n;
		}
	}
	printf("Max : %d Min : %d Somme : %d ",max,min,s);
	return 0;
}
