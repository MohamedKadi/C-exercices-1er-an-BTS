#include<stdio.h>
int tablesomme(int T[],int a){
	int s=0;
	if(a!=0){
		
		
		
		tablesomme(T,a-1);
		s = s + T[a-1];
		
	}
	return s;
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
