#include<stdio.h>

int main(){
	int n[10];
	int i = 0, k = 0;
	int a;
	
	printf("Donner les éléments du tableau : \n");
	for(int j = 0; j<10; j++){
		printf("T[%d] = ",j);
		scanf("%d",&a);
		if(a%2 == 0){
			n[i] = a;
			i++;
		}else{
			k++;
			n[10-k] = a;
		}
	}
	for(int i = 0; i<10; i++){
		printf("%d ",n[i]);
	}
}
