#include<stdio.h>
int bin(int a){
	if(a!=0){
		
		bin(a/2);
		printf("%d ",a%2); 
		
	}
	
	
}


int main(){
	int a;
	int i = 0;
	printf("donner un nombre: ");
	scanf("%d",&a);
	
	bin(a);

}
