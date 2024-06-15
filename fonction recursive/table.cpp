#include<stdio.h>
int table(int T[],int a){
	if(a!=0){
		
		
		
		table(T,a-1);
		printf("%d ",T[a-1]);
		
	}
}


int main(){
	int a;
	int T[a];
	printf("donner un nombre: ");
	scanf("%d",&a);
	for(int i = 0; i < a; i++){
		scanf("%d",&T[i]);
	}
	
	table(T,a);

}
