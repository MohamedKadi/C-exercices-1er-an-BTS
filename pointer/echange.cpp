#include<stdio.h>

int main(){
	int a,b;
	int *p1;
	int *p2;
	p1=&a;
	p2=&b;
	do{
	printf("\ndonner un a:");
	scanf("%d",&(*p1));
	printf("donner un b:");
	scanf("%d",&(*p2));
	
	if((*p1)>=0 && (*p2) >= 0){
		int temp = (*p1);
		(*p1)=(*p2);
		(*p2)=temp;
	}else{
		if(*p1>=0){
			(*p1)=(*p1)*(*p1);
		}else if(*p2>=0){
			(*p2)=(*p2)*(*p2);
		}else{
			
		}
	}
	
	printf("a=%d | b=%d",(*p1),(*p2));
	}while(a!=0 && b!=0);
	
	
 	
}
