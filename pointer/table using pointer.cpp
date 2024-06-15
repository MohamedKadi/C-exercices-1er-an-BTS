#include<stdio.h>



int main(){
	int n;
	printf("donner le size de tableau: ");
	scanf("%d",&n);
	int t[n];
	int *p;
	p=t;
	printf("donner les values: \n");
	for(int i=0; i < n;i++){
		scanf("%d",&*(p+i));
	}
	printf("\n");
	for(int i=0; i < n;i++){
		printf("%d |",*(p+i));
	}
	
}
