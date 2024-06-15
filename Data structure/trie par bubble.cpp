#include<stdio.h>
#define n 9
int main(){
	int T[n]={8,12,3,16,18,2,5,20,6};
	int j;
	int temp;
	int trie=0; //non trie
	int s;
	while(trie==0){
		trie=1;
		for(int i=1;i < n;i++){	
			j=i-1;
			if(T[j]>T[i]){
				temp = T[i];
				T[i]=T[j];
				T[j]=temp;
				trie = 0;
			}
		}
		
	}
	for(int i=0; i <n; i++){
		printf("%d ",T[i]);
	}
}
