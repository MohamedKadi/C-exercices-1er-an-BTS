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
	int x;
	printf("enter a number u want to remove: ");
	scanf("%d",&x);
	int i = 0;
	do{
		if(x==*(p+i)){
			for(int j=i;j <n;j++){
				*(p+j)=*(p+j+1);
			}
			n--;
		}else{
			i++;
		}		
	}while(i < n);
	
	for(int i= 0; i < n;i++){
		printf("%d",*(p+i));
	}
}
