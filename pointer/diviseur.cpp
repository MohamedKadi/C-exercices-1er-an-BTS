#include<stdio.h>

int main(){
	int a;
	int *pointer;
	pointer=&a;
	
	printf("donner un a:");
	scanf("%d",&(*pointer));
	
	for(int i = 1;i <= (*pointer); i++){
		if((*pointer)%i == 0){
			printf("%d |",i);
		}
	}
}
