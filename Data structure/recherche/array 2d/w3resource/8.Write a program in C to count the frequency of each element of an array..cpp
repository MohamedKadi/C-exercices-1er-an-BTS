#include<stdio.h>
#define n 7

int main(){
	int T[n]={25,12,43,43,43,43,43};
	int occ[n];
	int occurrence;
	for(int i =0 ; i < n; i++){
		occurrence = 0;
		for(int j = 0; j < n; j++){
			if(T[i]==T[j]){
				occurrence++;
			}
		}
		occ[i]=occurrence;
	}
	for(int i = 0; i < n;i++){
		printf("%d occurs %d\n",T[i],occ[i]);
	}
}
