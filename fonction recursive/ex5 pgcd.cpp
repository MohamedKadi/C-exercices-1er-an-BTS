#include<stdio.h>

int pgcd(int a,int b){
	int r;
	r=a%b;
	if(r!=0){
		a=b;
		b=r;
		return pgcd(a,b);
	}
	return b;
}



int main(){
	int a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("%d",pgcd(a,b));
}
