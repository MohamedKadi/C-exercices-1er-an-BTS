#include<stdio.h>
#define n 10

int main(){
	int T[n];
	int x, kas;
	printf("donner x: ");
	scanf("%d",&x);
	for(int i = 0; i < n; i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	int i = 0, j=n-1;
	while(i < j){
		if(T[i]!=x){
			i++;
		}else{
			kas = T[i];
			T[i] = T[j];
			T[j] = kas;
			j--;
		}
	}
	for(int i = 0; i < n; i++){
		printf("T[%d]= %d	",i,T[i]);
	}
}
