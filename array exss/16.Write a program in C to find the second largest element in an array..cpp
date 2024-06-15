#include<stdio.h>
#define n 10
int main(){
	int T[n]={1,2,3,4,5,6,7,8,9,10};
	int trie = 0;
	int temp;
	while(trie == 0){
		trie=1;
		for(int i = 0; i < n-1; i++){
			if(T[i]<T[i+1]){
				temp = T[i];
				T[i] = T[i+1];
				T[i+1]=temp;
				trie = 0;
			}
		}	
	}
	int i =1;
	while(T[i] == T[i-1]){
		i++;
	}
	printf("%d",T[i]);
}
