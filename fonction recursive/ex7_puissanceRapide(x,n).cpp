#include<stdio.h>

int puissance(int a,int b){
	if(b==0){
		return 1;
	}
	if(b%2==0){
		return puissance(a,b/2)*puissance(a,b/2);
	}else{
		return a* puissance(a,(b-1)/2)*puissance(a,(b-1)/2);
	}
}



int main(){
	int a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("%d",puissance(a,b));
}

// puissance(2,30)=
