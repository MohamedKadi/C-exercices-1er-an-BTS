#include<stdio.h>
int pos(int a){
	if(a==0){
		return 0;
	}
	printf("%d ",a);
	return pos(a-1);
}

int neg(int a, int i){
	
	if(i==a){
		return i;
	}
	printf("%d ",i);
	return neg(a,i+1);
	
}

int main(){
	int a;
	int i = 0;
	printf("donner un nombre: ");
	scanf("%d",&a);
	
	printf("%d",pos(a));
	printf("\n");
	printf("%d",neg(a,i));
}
