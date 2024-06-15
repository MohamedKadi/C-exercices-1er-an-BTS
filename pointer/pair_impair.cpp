#include<stdio.h>

int main(){
	int a;
	int *pointer;
	pointer=&a;
	
	printf("donner un a:");
	scanf("%d",&(*pointer));
	
	if((*pointer%2)==0){
		printf("%d est pair",(*pointer));
		
	}else{
		printf("%d est impair",(*pointer));
	}
}
