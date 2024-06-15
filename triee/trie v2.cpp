#include<stdio.h>


int main(){
	int T[10]={1,12,3,4,5,6,7,8,9,5};
	
	int trie=0;
	
	while(trie!=1){
		trie=1;
		for(int i=0;i<9;i++){
			if(T[i]>T[i+1]){
				int temp= T[i];
				T[i]=T[i+1];
				T[i+1]=temp;
				trie=0;
			}
		}	
	}
	for(int i=0;i<10;i++){
		printf("T[%d]=%d\n",i,T[i]);
	}
	
}
