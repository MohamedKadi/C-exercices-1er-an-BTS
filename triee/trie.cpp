#include<stdio.h>
#define n 10
int main(){
	int T[n]={1,2,3,4,5,6,7,8,9,10};
	int trie = 1;
	
	while(trie != 0){
		trie = 0;
		for(int i=1; i < n; i++){
			if(T[i-1]<T[i]){
				int temp=T[i];
				T[i] = T[i-1];
				T[i-1]=temp;
				trie = 1; 
			}
		}
	}
	for(int i=0; i < n; i++){
		printf("%d ",T[i]);	
	}
}
