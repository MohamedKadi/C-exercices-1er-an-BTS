#include<stdio.h>
int table(int T[],int d, int f){
	if(d<=f){	
		if(table(T,d+1,f)!=table(T,d,f-1)){
			return 0;
		}else{
			return 1;
		}
	}
}

int main(){
	int f;
	int d;
	int T[f];
	printf("donner un nombre: ");
	scanf("%d",&f);
	for(int i = 0; i < f; i++){
		scanf("%d",&T[i]);
	}
	
	printf("%d ",table(T,d,f));
	

}
