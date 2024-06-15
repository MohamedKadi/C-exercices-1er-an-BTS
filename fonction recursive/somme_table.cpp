#include<stdio.h>
int tablesomme(int T[],int a){
	
	if(a!=0){
		
		return tablesomme(T,a-1)+T[a-1];
		
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
	
	printf("%d ",tablesomme(T,a));

}
