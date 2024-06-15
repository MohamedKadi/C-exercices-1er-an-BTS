#include<stdio.h>

int main(){
	int n;
	printf("donner un taille: ");
	scanf("%d",&n);
	int tab[n];
	int *p;
	p=tab;
	printf("les donner: ");
	for(int i= 0; i < n;i++){
		scanf("%d",&*(p+i));
	}
	int i = 0;
	int j = n-1;
	int temp;
	do{
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
		i++;
		j--;		
	}while(i < j);
	
	for(int i= 0; i < n;i++){
		printf("%d",*(p+i));
	}
}
