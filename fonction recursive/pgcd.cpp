#include<stdio.h>
int pgcd(int a,int b){
	int r=a%b;
	if(r==0){
		return b;
	}
	a = b;
	b = r;
	return pgcd(a,b);
}

int main(){
	int a, b;
	printf("donner un nombre: ");
	scanf("%d",&a);
	printf("donner un nombre: ");
	scanf("%d",&b);
	printf("%d",pgcd(a,b));
}
