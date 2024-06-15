#include<stdio.h>

int main(){
	int n[5];
	int j = 0;
	int x, pre;
	printf("donner x: ");
	scanf("%d",&x);
	printf("donner 5 nombres: ");
	for(int i = 0; i < 5; i++){
		printf("T[%d] = ",i);
		scanf("%d",&n[i]);
	}
	for(int i = 0;i < 5; i++){
		
		j++;
		printf("%d    ", n[5 - j]);
		printf("%d	",n[5-j]);
		if(n[i] == x){
			j++;
			if(n[i] != n[5-j]){
				pre = n[5-j];
				n[5-j] = n[i];
				n[i] = pre;
			}
			
		}
	}
	for(int i = 0; i < 5; i++){
		printf("\nT[%d] = %d\n",i,n[i]);
	}
}
