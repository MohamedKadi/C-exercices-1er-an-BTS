#include<stdio.h>
#include<stdbool.h>

int main(){
	int T[10]={1,2,3,4,5,6,7,8,9,10};
	
	int trie=0;
	
	/*while(trie!=1){
		trie=1;
		for(int i=0;i<9;i++){
			if(T[i]<T[i+1]){
				int temp= T[i];
				T[i]=T[i+1];
				T[i+1]=temp;
				trie=0;
			}
		}	
	}
	for(int i=0;i<10;i++){
		printf("T[%d]=%d\n",i,T[i]);
	}*/
	
	/*while(trie!=1){
		trie=1;
		for(int i=0;i<9;i++){
			if(T[i]<T[i+1]){
				int temp=T[i];
				T[i]=T[i+1];
				T[i+1]=temp;
				trie=0;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("T[%d]=%d\n",i,T[i]);
	}*/
	
	int d=0;
	int f=-5;
	int m=(d+f)/2;
	bool found=false;
	int e=9;
	while(found!=true && f>=d){
		m=(d+f)/2;
		if(T[m]==e){
			found=true;
			break;
		}else if (T[m]<e){
			d=m+1;
		}else {
			f=m-1;
		}
	}
	printf("\n");
	if(found==true){
		printf("true found number");
	}else{
		printf("false not found number");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}



