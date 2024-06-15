#include<stdio.h>
#define n 10
int main() {
	int T[n]={ 2, 9, 1, 2, 6, 6, 7, 8, 2, 3};
	int x = 2;
	int j=n-1;
	int i=0;
	while(i < n/2){
		if(T[i]==x){
			int temp = T[i];
			T[i]=T[j];
			T[j]=temp;
			j--;
		}else{
			i++;
		}
	}
	for(int i=0; i < n; i++){
		printf("%d ",T[i]);
	}
	
}
