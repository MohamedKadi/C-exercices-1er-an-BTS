#include<stdio.h>

int main(){
	int n[10];
	int pre = -999,x;
	int j = 0;
	printf("donner x: \n");
	scanf("%d",&x);
		
	printf("Donner les éléments du tableau : \n");
	for(int i = 0; i<10; i++){
		printf("T[%d] = ",i);
		scanf("%d",&n[i]);
	}
	for(int i =0; i <10;i++){
		if(n[i] == x){
			j++;
			if(n[i]!=pre){
				pre = n[10-j];
				n[10-j] = n[i];
				n[i] = pre;
			}
			
		}
	}
	
	for(int i = 0; i<10; i++){
		printf("%d ",n[i]);
	}
}
