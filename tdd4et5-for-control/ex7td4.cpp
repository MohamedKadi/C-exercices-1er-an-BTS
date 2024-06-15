#include<stdio.h>
#define n 5
int main() {
	int T1[n]={-2,4,6,8,11};
	int T2[n] = {3,9,16,18,21};
	int m=n*2;
	int T[m];
	int i = 0;
	while(i < n){
		T[i]=T1[i];
		i++;
	}
	int j=0;
	while(i < n*2){
		T[i]=T2[j];
		j++;
		i++;
	}
	int trie = 0;
	while (trie==0){
		trie=1;
		for(int j=0;j<(n*2)-1;j++){
			if(T[j]>T[j+1]){
				trie=0;
				int temp=T[j];
				T[j]=T[j+1];
				T[j+1]=temp;
			}
		}
	}
	
	for(int i=0; i < n*2; i++){
		printf("%d ",T[i]);
	}
}
