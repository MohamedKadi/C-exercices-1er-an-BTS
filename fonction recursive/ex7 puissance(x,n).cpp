#include<stdio.h>

int puissance(int a,int b){
	if(b==1){
		return a;
	}
	return puissance(a,b-1)*a;
}



int main(){
	int a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("%d",puissance(a,b));
}

// puissance(2,30)=1073741824
