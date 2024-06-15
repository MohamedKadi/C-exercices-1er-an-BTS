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
	int x;
	printf("enter a number: ");
	scanf("%d",&x);
	int i=0;
	do{
		if(x==*(p+i)){
			for(int j=i; j < n-1;j++){			
				*(p+j)=*(p+j+1);
			}
			n--;
		}else{
			i++;
		}	
	}while(n>i);
	
	
	printf("\n");
	
	
	for(int i=0; i < n;i++){
		printf("%d |",*(p+i));
	}
	
}
