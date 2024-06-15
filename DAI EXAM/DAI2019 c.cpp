#include<stdio.h>

int Puissance(int x,int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*x;
	}
	return sum;
}

int fact(int n){
	int fact=1;
	if(n==0){
		return 1;
	}else{
		for(int i=1;i<=n;i++){
			fact=fact*i;
		}
		return fact;
	}
}

int fonc(int x,int n){
	int sum=0;
	for(int i=0;i<=n;i++){
		sum=sum+Puissance(x,i)/fact(i);
	}
	return sum;
}

int main(){
	int n;
	float x;
	printf("donner un x: ");
	scanf("%f",&x);
	printf("donner un n: ");
	scanf("%d",&n);
	printf("fonc=%d",fonc(x,n));
}
